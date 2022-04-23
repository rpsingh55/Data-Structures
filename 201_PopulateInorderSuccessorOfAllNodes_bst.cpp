#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    struct Node *next;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
        next = NULL;
    }
};

void printInorder(Node *node)
{
    if (node == NULL)
    {
        return;
    }
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}
Node *buildTree(string str)
{
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    Node *root = new Node(stoi(ip[0]));

    queue<Node *> queue;
    queue.push(root);

    int i = 1;
    while (!queue.empty() && i < ip.size())
    {


        Node *currNode = queue.front();
        queue.pop();

        string currVal = ip[i];

        if (currVal != "N")
        {

            
            currNode->left = new Node(stoi(currVal));

            
            queue.push(currNode->left);
        }

      
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];


        if (currVal != "N")
        {

            currNode->right = new Node(stoi(currVal));

            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

Node *Inorder(Node *root)
{
    if (root->left == NULL)
        return root;
    Inorder(root->left);
}



class Solution
{
public:
    //Node* prev=NULL;
    vector<Node*> v;
    
    void inorder(Node *root){
        if(!root) return;
        inorder(root->left);
        v.push_back(root);
        inorder(root->right);
    }
    
    void populateNext(Node *root)
    {
        inorder(root);
        for(int i = 0; i < v.size()-1; i++){
            v[i]->next = v[i+1];
        }
       /*if(!root)
       return ;
       populateNext(root->left);
       if(prev)
       prev->next=root;
       prev=root;
       populateNext(root->right);*/
    }
};


int main()
{
    int t;
    scanf("%d", &t);
    cin.ignore();
    while (t--)
    {
        string treeString;
        getline(cin, treeString);
        Node *root = buildTree(treeString);
        Solution obj;
        obj.populateNext(root);
        Node *ptr = Inorder(root);
        while (ptr)
        {
            printf("%d->%d ", ptr->data, ptr->next ? ptr->next->data : -1);
            ptr = ptr->next;
        }
        cout << endl;
    }
    return 0;
}  