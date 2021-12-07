#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

   long long int  countPS(string s)
    {
        long long int m = 1000000007;
        int n = s.length();
      long long  int dp[n][n];
        for(int i = 0; i < n; i++){
            for(int j = 0,k = i; k < n;j++,k++){
                if(i == 0){
                    dp[j][k] = 1;
                }
                else if(i == 1){
                    dp[j][k] = (s[k] == s[j] ? 3 : 2);
                }
                else{
                    if(s[k] == s[j]){
                        dp[j][k] = dp[j][k-1] + dp[j+1][k] + 1;
                        dp[j][k] += m;
                        dp[j][k] = dp[j][k] % m;
                    }
                    else{
                        dp[j][k] = dp[j][k-1] + dp[j+1][k] - dp[j+1][k-1];
                        dp[j][k] += m;
                         dp[j][k] = dp[j][k] % m;
                    }
                }
            }
        }
        return dp[0][n-1];
    }

void displayarray(int a[],int n){
for(int i = 0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<"\n";
}
int main(){
    cout<<countPS("abcd");
}
