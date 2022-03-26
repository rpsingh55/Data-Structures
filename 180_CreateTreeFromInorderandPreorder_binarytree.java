    import java.util.*;
    import java.io.*;
    class Node
    {
        int data; 
        Node left, right;
        Node(int key)
        {
            data = key;
            left = right = null;
        }
    }
    
    class GFG
    {
        public static void main (String[] args)
        {
            Scanner sc = new Scanner(System.in);
            int t = sc.nextInt();
            
            while(t-- > 0)
            {
                int n = sc.nextInt();
                Node root = null;
                int inorder[] = new int[n];
                int preorder[] = new int[n];
                for(int i = 0; i < n; i++)
                  inorder[i] = sc.nextInt();
                  
                for(int i = 0; i < n; i++)
                  preorder[i] = sc.nextInt();
                  
                Solution ob = new Solution();
                root = ob.buildTree(inorder, preorder, n);
                postOrdrer(root);
                System.out.println();
            }
        }
        
        public static void postOrdrer(Node root)
        {
            if(root == null)
              return;
              
            postOrdrer(root.left);
            postOrdrer(root.right);
            System.out.print(root.data + " ");
        }
    }// } Driver Code Ends
    class Solution
    {    Node root1 = null;
        Node temp = null;
        Node temp2 = null;
        public  Node buildTree(int inorder[], int preorder[], int n)
        {
            if(n == 1){
              return null;
            }
            else{
                int j = preorder[0];
                int i,k;
                for( i =0;i<n;i++){
                    if(inorder[i] == j){
                        break;
                    }
                }
    
                int[] inorderLeft = new int[i];
                int[] inorderRight = new int[n-i-1];
                int[] preorderLeft = new int[i];
                int[] preorderRight = new int[n-i-1];
                for(k=0;k<n;k++){
                    if(k < i){
                        inorderLeft[k] = inorder[k];
                    }
                    else if(k > i){
                        inorderRight[k-i-1] = inorder[k];
                    }
                }
                for(k = 1;k<n;k++){
                    if(k < i+1){
                        preorderLeft[k-1] = preorder[k];
                    }
                    else{
                        preorderRight[k-i-1] = preorder[k];
                    }
    
                }
                if(root1 == null){
                    temp = new Node(j);
                    root1 = temp;
                }
    
                if(n-i-1 != 0){
                    addRight(inorderRight, preorderRight , n-i-1,j);
                }
                if(i != 0){
                    addLeft(inorderLeft, preorderLeft , i,j);
                }
    
            }
            return root1;
    
        }
        void addLeft(int inorder[], int preorder[], int n,int w)
        {   searchNode(root1,w);
            temp2.left = new Node(preorder[0]);
            buildTree(inorder, preorder, n);
    
        }
        void addRight(int inorder[], int preorder[], int n,int w)
        {   
            searchNode(root1,w);
            temp2.right = new  Node(preorder[0]);
            buildTree(inorder, preorder, n);
    
        }
        public void searchNode(Node temp1, int value){
            //Check whether tree is empty
            if(root1 == null){
                return;
            }
            else{
                //If value is found in the given binary tree then, set the flag to true
                if(temp1.data == value){
                    temp2 = temp1;
                    return;
                }
                //Search in left subtree
                if(temp1.left != null){
                    searchNode(temp1.left, value);
                }
                //Search in right subtree
                if( temp1.right != null){
                    searchNode(temp1.right, value);
                }
            }
        }
    }