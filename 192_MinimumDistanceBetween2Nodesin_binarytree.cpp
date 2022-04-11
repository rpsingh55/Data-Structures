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
  bool find(Node* root, int x, vector<int> &path)
{
	if (! root)
		return false;
		
	if (root->data == x)
		return true;
		
	path.push_back(0);
	
	if (find(root->left, x, path))
		return true;
		
	path.back() = 1;
	
	if (find(root->right, x, path))
		return true;
		
	path.pop_back();
	return false;
}

int findDist(Node* root, int a, int b) {
	vector<int> pa, pb;
	
	find(root, a, pa);
	find(root, b, pb);
	
	int r = pa.size() + pb.size();
	
	for (int i = 0;i < pa.size() && i < pb.size() && pa[i] == pb[i]; ++i, r -= 2);
	
	return r;
}
};


int main() {

   
    int t;
    scanf("%d ", &t);
    while (t--) {
        string s, ch;
        getline(cin, s);
        
        Node* root = buildTree(s);
        int n1, n2;
        scanf("%d %d ", &n1, &n2);
        Solution ob;
        cout << ob.findDist(root, n1, n2) << endl;
     
    }
    return 0;
}
  