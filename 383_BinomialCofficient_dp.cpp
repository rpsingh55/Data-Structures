#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

int nCr(int n, int r){
        if(r > n){
            return 0;
        }
        int m = 1000000007;
       int dp[r+1] = {0};
       dp[0] = 1;
       for(int i = 0; i < n; i++){
           for(int j = r; j > 0; j--){
               dp[j] = (dp[j] + dp[j-1])%m;
           }
       }
       return dp[r];
    }

void displayarray(int a[],int n){
for(int i = 0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<"\n";
}
int main(){
    cout<<nCr(4,3);
}
