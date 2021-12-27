#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

 int countFriendsPairings(int n) 
    { 
        long long int dp[n+1];
        dp[0] = 1;
        dp[1] = 1;
        int m = 1000000007;
        for(int i = 2; i <= n; i++){
            dp[i] = (dp[i-1] + (i-1) * dp[i-2]);
            dp[i] = dp[i] % m;
        }
        return dp[n];
    }

int main(){
    cout<<countFriendsPairings(5);
}
