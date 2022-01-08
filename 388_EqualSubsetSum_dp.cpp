#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

int equalPartition(int n, int arr[])
    {
       int jod = 0;
       for(int i = 0;i < n;i++){
           jod += arr[i];
       }
       if(jod % 2 != 0){
           return 0;
       }
       else{
           bool dp[n+1][(jod/2)+1];
           for(int i = 0;i <= n;i++){
               for(int j = 0; j <= jod/2;j++){
                   if(i == 0 or j == 0){
                        dp[i][j] = false;        
                   }
                   else if(arr[i-1] > j){
                       dp[i][j] = dp[i-1][j];
                   }
                   else if(arr[i-1] == j){
                       dp[i][j] = true;
                   }
                   else{
                       dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
                   }
               }
           }
            return dp[n][jod/2] == true ? 1 : 0;
       }
    }

int main(){

    int arr[] = {1,2,5,3,6,8,4,9};
    if(equalPartition(8,arr) == 1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
