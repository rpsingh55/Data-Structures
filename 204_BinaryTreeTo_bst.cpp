#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; 

void printInorder (struct Node* node)
{
    if (node == NULL)
    return;

    printInorder (node->left);
    printf("%d ", node->data);
    printInorder (node->right);
}

Node* buildTree(string str)
{   
    if(str.length() == 0 || str[0] == 'N')
    return NULL;

    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    Node *root = new Node(stoi(ip[0]));

    queue<Node*> queue;
    queue.push(root);

    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        Node* currNode = queue.front();
        queue.pop();
        string currVal = ip[i];

        if(currVal != "N") {

            currNode->left = new Node(stoi(currVal));

            queue.push(currNode->left);
        }

        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        if(currVal != "N") {

            currNode->right = new Node(stoi(currVal));

            queue.push(currNode->right);
        }
        i++;
    }
    return root;
}



class Solution{
  public:
  vector<int> v;
  int i = 0;
    void traversal (Node *root){
        if(root == NULL){
            return;
        }
        traversal(root->left);
        v.push_back(root->data);
        traversal(root->right);
    }
    void inorder1(Node *root){
        if(root == NULL) return;
        inorder1(root->left);
        root->data = v[i++];
        inorder1(root->right);
    }
    Node *binaryTreeToBST (Node *root)
    {
        traversal(root);
        sort(v.begin(),v.end());
        inorder1(root);
        return root;
    }
};

int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        string s;
        getline(cin,s);
        Node* root = buildTree(s);
        Solution obj;
        Node *res = obj.binaryTreeToBST (root);
        printInorder(res);
        cout<<endl;
    }
    return 0;
}