#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

	 int longestCommonSubstr (string s1, string s2, int n, int m)
    {
        int dp[n+1][m+1];
        int jawab = 0;
        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= m; j++){
                if(i == 0 || j == 0){
                    dp[i][j] = 0;
                }
                else if(s1[i-1] == s2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else{
                    dp[i][j] = 0;
                }
                jawab = max(jawab, dp[i][j]);
            }
        }
        return jawab;
    }
 


int main(){
    int arr[] = {5,4,8,4,9,46};
    cout<<longestCommonSubstr("dfdfdeegrerkerwr","sdkefjrjrf",10,10);
}
 
