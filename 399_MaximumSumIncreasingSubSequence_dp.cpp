#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

    	int maxSumIS(int arr[], int n)  
	{  
	    int dp[n] = {0};
	    dp[0] = arr[0];
	    for(int i = 1;i < n;i++){
	        dp[i] = arr[i];
	        for(int j = 0;j < i;j++){
	            if(arr[j] < arr[i]){
	                dp[i] = max(dp[i] , dp[j] + arr[i]);
	            }
	        }
	    }
	    int jawab = 0;
	    for(int i = 0;i < n;i++){
	        jawab = max(jawab , dp[i]);
	    }
	    return jawab;
	}  


int main(){
    int arr[] = {5,4,8,4,9,46};
    cout<<maxSumIS(arr , 6);
}
 
