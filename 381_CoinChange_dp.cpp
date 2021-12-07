#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

  long long int count(int s[], int m, int n) {
        long long int dp[n+1] = {0};
        dp[0] = 1;
        for(int i = 0;i<m;i++){
            for(int j = s[i]; j <= n;j++){
                dp[j] += dp[j-s[i]];
            }
        }
        return dp[n];
    }

void displayarray(int a[],int n){
for(int i = 0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<"\n";
}
int main(){
    int arr[4] = {2,3,5,6};
    cout<<count(arr,4,10);
}
