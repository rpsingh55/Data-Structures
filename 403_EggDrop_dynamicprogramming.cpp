#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

 int dp[201][201];
   int solve(int e, int f) 
   {
       if(f==0||f==1)
       return f;
       if(e==1)
       return f;
       if(dp[e][f]!=-1)
       return dp[e][f];
       int mn=INT_MAX;
       for(int k=1;k<=f;k++){
           int temp=1+max(solve(e-1,k-1),solve(e,f-k));
           mn=min(mn,temp);
       }
       return dp[e][f]=mn;
   }
    
    int eggDrop(int n, int k) 
    {
        
       memset(dp,-1,sizeof(dp));
       return solve(n,k);
        
    }
 


int main(){
    int arr[] = {5,4,8,4,9,46};
    cout<<eggDrop(5,6);
}
 
