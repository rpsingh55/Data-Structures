#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

int matrixmul(int arr[],int n){
    int dp[n][n];
    for(int i = 0;i<n;i++){
        dp[i][i] = 0;
    }
    for(int l = 2; l<n; l++){
        for(int i = 1; i < n-l+1; i++){
            int j = i+l-1;
            dp[i][j] = INT_MAX;
            for(int k = i;k < j;k++){
                int temp = dp[i][k] + dp[k+1][j] + (arr[i-1] * arr[k] * arr[j]);
                dp[i][j] = min(dp[i][j],temp);
            }
        }
    }
    return dp[1][n-1];
}

int main(){
    int arr[] = {1,2,3,4};
    cout<<matrixmul(arr,4);
    return 0;
}
