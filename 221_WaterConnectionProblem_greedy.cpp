#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    vector<vector<int>> solve(int n,int p,vector<int> a,vector<int> b,vector<int> d)
    {
         int A[n+1]={0};
        int vis[n+1]={0};
        vector<int>V(n+1,0);
        for(int i=1;i<=p;i++){
            A[a[i-1]] = b[i-1];
            V[a[i-1]] = d[i-1];
        }
        for(int i=1;i<=n;i++){
            if(vis[i]==0){
                int k = i;
                while(A[k] != 0 and A[k] != i){
                    V[i] = min(V[i],V[k]);
                    k = A[k];
                    vis[k]=1;
                }
                if(i != k) A[i] = k;
            }
        }
        vector<vector<int>>X;
        for(int i=1;i<=n;i++){
            if(vis[i]==0 and A[A[i]] != i and A[i] != 0){
                vector<int>temp(3);
                temp[0] = i;
                temp[1] = A[i];
                temp[2] = V[i];
                X.push_back(temp);
            }
        }
        return X;
    }
};


int main()
{
	int t,n,p;
	cin>>t;
	while(t--)
    {
        cin>>n>>p;
        vector<int> a(p),b(p),d(p);
        for(int i=0;i<p;i++){
            cin>>a[i]>>b[i]>>d[i];
        }
        Solution obj;
        vector<vector<int>> answer = obj.solve(n,p,a,b,d);
        cout<<answer.size()<<endl;
        for(auto i:answer)
        {
            cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<endl;
        }
        
    }
	return 0;
} 