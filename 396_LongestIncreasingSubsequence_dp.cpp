#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

 int longestSubsequence(int n, int a[])
{
    int dp[n+1];
    dp[0] = 1;
    for(int i = 1;i < n;i++){
        dp[i] = 1;
        for(int j = 0;j < i;j++){
            if(a[i] > a[j]){
                dp[i] = max(dp[i] , dp[j] + 1);
            }
        }
    }
    int jawab = 0;
    for(int i = 0;i < n;i++){
        jawab = max(jawab, dp[i]);
    }
    return jawab;
}

    

int main(){
    int arr[] = {3,5,2,4,5,3,1,3,5};
    cout <<longestSubsequence(9,arr);
}
