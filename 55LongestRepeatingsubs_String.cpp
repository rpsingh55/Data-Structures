#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
using namespace std;

	int LongestRepeatingSubsequence(string a){
		    
		    int n = a.length();
		    int arr[n+1][n+1],i,j;
		    for(i=0;i <= n;i++){
		        for(j=0;j <= n;j++){
		       arr[i][j] = 0;
		        }
		    }
		    for(i=1;i <= n;i++){
		        for(j=1; j <= n; j++){
		            if(a[i-1] == a[j-1] && i !=j){
		                arr[i][j] = 1 + arr[i-1][j-1];
		            }
		            else{
		                arr[i][j] = max(arr[i-1][j],arr[i][j-1]);
		            }
		        }
		    }
		    return arr[n][n];
		    
		}

int main(){

cout<<LongestRepeatingSubsequence("forgeeksskeegfor");

}
