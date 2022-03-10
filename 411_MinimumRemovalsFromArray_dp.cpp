#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

	   
  int dp[100][100];
 

int countRemovals(int a[], int i, int j, int k)
{
    
    if (i >= j)
        return 0;
 
   
    else if ((a[j] - a[i]) <= k)
        return 0;
 
   
    else if (dp[i][j] != -1)
        return dp[i][j];
 
  
    else if ((a[j] - a[i]) > k) {
 
      
        dp[i][j] = 1 + min(countRemovals(a, i + 1, j, k),
                           countRemovals(a, i, j - 1, k));
    }
    return dp[i][j];
}
 

int removals(int a[], int n, int k)
{
   
    sort(a, a + n);
 
    memset(dp, -1, sizeof(dp));
    if (n == 1)
        return 0;
    else
        return countRemovals(a, 0, n - 1, k);
}

int main(){
    int arr[] = {5,4,8,4,9,46};
    cout<<removals(arr,6,5);
}
 
