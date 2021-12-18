#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

    int LCS(string a,string b){
        int n = a.length();
        int dp[n+1][n+1];
        for(int i = 0;i <= n;i++){
            for(int j = 0;j <= n;j++){
                if(i == 0 || j == 0){
                    dp[i][j] = 0;
                }
                else{
                    if(a[i-1] == b[j-1]){
                        dp[i][j] = dp[i-1][j-1] + 1;
                    }
                    else{
                        dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                    }
                }
            }
        }
        return dp[n][n];
    }    
    int minInsertions(string s) {
        string q = s;
        reverse(q.begin(),q.end());
        
        return s.length() - LCS(s,q);   
    }

int main(){
   cout<<minInsertions("fdgdfsrrggearg");
}
 
