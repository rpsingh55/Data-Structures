#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

      int dp[1001][1001];
    int solve(int n,int w,int val[],int wt[]){
        if(w >= 0 and n < 0) return 0;
        else if(w < 0) return INT_MIN;
        else if(dp[n][w] != -1) return dp[n][w];
        
        int op1 = val[n] + solve(n-1,w-wt[n],val,wt);
        int op2 = val[n] + solve(n,w-wt[n],val,wt);
        int op3 = solve(n-1,w,val,wt);
        
        int ans = max({op1,op2,op3});
        
        return dp[n][w] = ans;
    }

    int knapSack(int N, int W, int val[], int wt[]){
        memset(dp,-1,sizeof dp);
        return solve(N-1,W,val,wt);
    }

int main(){
    int arr[] = {5,4,8,4,9,46};
    cout<<knapSack(6, 55, arr, arr);
}
 
