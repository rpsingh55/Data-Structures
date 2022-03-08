#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

	   
  long long int dp[201][201];
   
   long long int helper(int cost[],int n,int w){
       if(w == 0) return (0);
       if(n == 0 || w < 0) return (INT_MAX);
       
       if(dp[n][w] != -1) return (dp[n][w]);
       
       if(n <= w && cost[n-1] != -1){
           return dp[n][w] = min(cost[n-1] + helper(cost,n,w-n), helper(cost,n-1,w));
       }
       return dp[n][w] = helper(cost,n-1,w);
   }
   
        int minimumCost(int cost[], int N, int W) {
            memset(dp,-1,sizeof(dp));
            long long int res = helper(cost,N,W);
            return res >= INT_MAX ? -1 : (int)res;
        }

int main(){
    int arr[] = {5,4,8,4,9,46};
    cout<<minimumCost(arr,6,5);
}
 
