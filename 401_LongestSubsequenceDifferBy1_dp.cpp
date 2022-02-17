#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

    int longestSubsequence(int n, int arr[])
    {
        int dp[n];
        dp[0] = 1;
        
        for(int i = 1; i < n; i++){
            dp[i] = 1;
            for(int j = 0; j < i; j++){
                if(abs(arr[i] - arr[j]) == 1){
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        }
        int jawab = 1;
        for(int i = 0; i < n; i++){
            jawab = max(jawab, dp[i]);
        }
        return jawab;
    }


int main(){
    int arr[] = {5,4,8,4,9,46};
    cout<<longestSubsequence(6,arr);
}
 
