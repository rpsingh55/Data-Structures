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

void preorder(Node* root){
    if(!root){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


map<string,int> m;
vector<Node*> v;
string preorder1(Node* root){
    if(root == NULL){
        return " ";
    }
    string s = "";
    if(root->left == NULL && root->right == NULL){
         s += to_string(root->data);
         m[s]++;
    }
    
    s += preorder1(root->left);
    s += preorder1(root->right);
    if(m[s] == 1){
        v.push_back(root);
    }
    m[s]++;
    return s;
}

vector<Node*> printAllDups(Node* root)
{
    m.clear();
    v.clear();
    preorder1(root);
    return v;
}

int main()
{
    int t;
	scanf("%d ",&t);
    while(t--)
    {
        string treeString;
		getline(cin,treeString);
		Node* root = buildTree(treeString);
		vector<Node*> res = printAllDups(root);
		
		for(int i=0;i<res.size();i++){
		    preorder(res[i]);
		    cout<<endl;
		}
    }
    return 0;
}
