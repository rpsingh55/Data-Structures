
#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
 Node * reverse(Node*head){
       Node *curr=head,*prev=NULL,*next=NULL;
       while(curr){
           next = curr->next;
           curr->next = prev;
           prev = curr;
           curr = next;
       }
       return prev;
   }
   struct Node* addTwoLists(struct Node* first, struct Node* second)
   {
       // code here
       Node *t1 = reverse(first);
       Node *t2 = reverse(second);
       
       Node*temp1=t1,*temp2=t2;
       int carry=0,sum=0;
       Node *result=NULL,*head=NULL;
       while(temp1&&temp2){
           if(temp1->data + temp2->data + carry >9) {
               sum = (temp1->data+temp2->data +carry )%10;
               carry=1;
           }else{
               sum = temp1->data+temp2->data+carry;
               carry=0;
           }
           
           if(!result){
               Node *t = new Node(sum);
               result = t;
               head = result;
           }else{
               Node *t = new Node(sum);
               result->next = t;
               result=t;
               
           }
           temp1=temp1->next;
           temp2=temp2->next;
           
       }
       
       while(temp1){
           
           if(temp1->data+carry>9){
               sum = (temp1->data+carry)%10;
               carry=1;
               
           }else{
               sum = temp1->data+carry;
               carry=0;
           }
           if(!result){
               Node *t = new Node(sum);
               result = t;
               head = result;
           }else{
               Node *t = new Node(sum);
               result->next = t;
               result=t;
               
           }
           temp1=temp1->next;
           
       }
       
        while(temp2){
           
           if(temp2->data+carry>9){
               sum = (temp2->data+carry)%10;
               carry=1;
               
           }else{
               sum = temp2->data+carry;
               carry=0;
           }
           if(!result){
               Node *t = new Node(sum);
               result = t;
               head = result;
           }else{
               Node *t = new Node(sum);
               result->next = t;
               result=t;
               
           }
           temp2=temp2->next;
           
       }
       
       if(carry){
               Node *t = new Node(1);
               result->next = t;
               result=t;
       }
       
       
       Node *res = reverse(head);
       return res;
   }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends




















/*
import java.util.*;

class Node {
    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}

class GfG{
    
    static void printList(Node n){
        while(n!=null){
            System.out.print(n.data+" ");
            n = n.next;
        }
        System.out.println();
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        
        while (T-- > 0) {
            
            int n = sc.nextInt();
            int val = sc.nextInt();
            
            Node first = new Node(val);
            Node tail = first;
            for(int i=0; i<n-1; i++)
            {
                val = sc.nextInt();
                tail.next = new Node(val);
                tail = tail.next;
            }
            
            int m = sc.nextInt();
            val = sc.nextInt();
            
            Node second = new Node(val);
            tail = second;
            for(int i=0; i<m-1; i++)
            {
                val = sc.nextInt();
                tail.next = new Node(val);
                tail = tail.next;
            }
            
            Solution g = new Solution();
            Node res = g.addTwoLists(first, second);
            printList(res);
        }
    }
}
// } Driver Code Ends


/* node for linked list

class Node {
    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}

*/
/*
public class Solution{
    //Function to add two numbers represented by linked list.
    static Node reverse_PR(Node head) {
		Node pichla = null;
		Node abhi = head;
		Node agla = null;
		while(abhi != null){
			agla = abhi.next;
			abhi.next = pichla;
			pichla = abhi;
			abhi = agla;
		}
		return pichla;
	}
    
    static Node addTwoLists(Node first, Node second){
        first = reverse_PR(first);
        second = reverse_PR(second);
        boolean carry = false;
        Node jawab = null;
        if(first.data+second.data > 9){
            carry = true;
             jawab = new Node((first.data+second.data)%10);
        }
        else{
             jawab = new Node(first.data+second.data);
        }
        Node temp = jawab;
        first = first.next;
        second = second.next;
        while(first != null && second != null){
            if(carry){
                 if(first.data+second.data + 1 > 9){
                    carry = true;
                    temp.next = new Node((first.data + second.data + 1)%10);
                }
                else{
                    carry = false;
                    temp.next = new Node(first.data + second.data + 1);
                }
            }
            else{
                   if(first.data+second.data > 9){
                    carry = true;
                    temp.next = new Node((first.data+second.data)%10);
                }
                else{
                    carry = false;
                    temp.next = new Node(first.data+second.data);
                }
            }
            first = first.next;
            second = second.next;
            temp = temp.next;
        }
        while(first != null){
            if(carry){
                if(first.data + 1 > 9){
                    carry = true;
                    temp.next = new Node((first.data + 1)%10);
                }
                else{
                    carry = false;
                    temp.next = new Node(first.data + 1);
                }
            }
            else{
                temp.next = new Node(first.data);
            }
            first = first.next;
            temp = temp.next;
        }
        while(second != null){
            if(carry){
                if(second.data + 1 > 9){
                    carry = true;
                    temp.next = new Node((second.data + 1)%10);
                }
                else{
                    carry = false;
                    temp.next = new Node(second.data + 1);
                }
            }
            else{
                temp.next = new Node(second.data);
            }
            second = second.next;
            temp = temp.next;
        }
        if(carry){
            temp.next = new Node(1);
        }
        jawab = reverse_PR(jawab);
        return jawab;
    }
}*/