#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;
int maxGold(int n, int m, vector<vector<int>> M)
    {
     int dp[n+1][m+1];
    for(int i=0; i < n; i++)dp[i][0] = M[i][0];
    for(int j=1; j < m; j++){
        for(int i=0; i < n; i++){
            dp[i][j] = dp[i][j-1];
            if(i+1 < n){
                dp[i][j] = max(dp[i][j],dp[i+1][j-1]);
            }
            if(i-1 >= 0){
                dp[i][j] = max(dp[i][j],dp[i-1][j-1]) ;
            }
            dp[i][j] += M[i][j];
        }
    }
    int ans=0;
    for(int i=0; i < n; i++){
        ans = max(ans,dp[i][m-1]);
    }
return ans;
    }

int main(){
    vector<vector<int>>gold= { {1, 3, 1, 5},
        {2, 2, 4, 1},
        {5, 0, 2, 3},
        {0, 6, 1, 2}};
    int m = 4, n = 4;
    cout << maxGold (m, n,gold);
}
