#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int checkMirrorTree(int n, int e, int A[], int B[]) {
        unordered_map<int, vector<int>> a, b;
        for(int i = 0; i < 2 * e; i += 2) {
            a[A[i]].push_back(A[i + 1]);
            b[B[i]].push_back(B[i + 1]);
        }
        
        for(auto it: a) {
            auto cur = b[it.first];
            reverse(cur.begin(), cur.end());
            if(cur != it.second) return 0;
        }
        
        return 1;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,e;
        
        cin>>n>>e;
        int A[2*e], B[2*e];
        
        for(int i=0; i<2*e; i++)
            cin>>A[i];
            
        for(int i=0; i<2*e; i++)
            cin>>B[i];

        Solution ob;
        cout << ob.checkMirrorTree(n,e,A,B) << endl;
    }
    return 0;
}  