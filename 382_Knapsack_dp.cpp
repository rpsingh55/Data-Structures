#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

     int knapSack(int w, int wt[], int val[], int n){
        int dp[n+1][w+1];
        for(int i = 0; i <= n ; i++){
            for(int j = 0;j <= w;j++){
                if(i == 0 || j == 0){
                    dp[i][j] = 0;
                }
                else if(wt[i-1] > j){
                    dp[i][j] = dp[i-1][j];
                }
                else{
                    dp[i][j] = max(dp[i-1][j],val[i-1]+dp[i-1][j - wt[i-1]]);
                }
            }
        }
        return dp[n][w];
    }

void displayarray(int a[],int n){
for(int i = 0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<"\n";
}
int main(){
    int arr1[3] = {1,2,3};
    int arr2[3] = {4,5,6};
    cout<<knapSack(3,arr2,arr1,3);
}
