#include<bits/stdc++.h>
#define pb push_back
using namespace std;

    int FindMaxSum(int arr[], int n)
    {
        int dp[n+1] = {0};
        dp[1] = arr[0];
        for(int i = 1;i < n;i++){
            dp[i+1] = max(dp[i-1]+arr[i],dp[i]);
        }
        return dp[n];
    }


int main(){

   int arr[] =  {3,5,5,5,1};
   cout<<FindMaxSum(arr,5);

   return 0;
}
 
