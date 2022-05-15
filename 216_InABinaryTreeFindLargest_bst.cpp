#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


Node* buildTree(string str) {
 
    if (str.length() == 0 || str[0] == 'N') return NULL;

    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    Node* root = newNode(stoi(ip[0]));

    queue<Node*> queue;
    queue.push(root);

    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        Node* currNode = queue.front();
        queue.pop();

        string currVal = ip[i];

        if (currVal != "N") {

            currNode->left = newNode(stoi(currVal));

            queue.push(currNode->left);
        }

        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        if (currVal != "N") {

            currNode->right = newNode(stoi(currVal));

            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}



class Solution{
    
    public:
    
    struct value{
        int min=-1;
        int max=-1;
        int cnt=0;
        bool bst=false;
    };
    value postorder(Node *root){
        
        if(!root)
        return {INT_MAX,INT_MIN,0,true};

        value v1=postorder(root->left);
        value v2=postorder(root->right);
        value v3;
        if(v1.bst && v2.bst && (v1.max<root->data && root->data<v2.min)){
            v3.min=min(v1.min,root->data);
            v3.max=max( root->data, v2.max);
            v3.cnt=v1.cnt+v2.cnt+1;
            v3.bst=true;
            
            return v3;
        }
        v3.cnt=max(v1.cnt, v2.cnt);
        return v3;
    }
    int largestBst(Node *root)
    {
    	
    	return postorder(root).cnt;
    }

};

  

int main() {

   
    int t;
    scanf("%d ", &t);
    while (t--) {
        string s, ch;
        getline(cin, s);
        
        Node* root = buildTree(s);
        Solution ob;
        cout << ob.largestBst(root) << endl;
    }
    return 0;
}