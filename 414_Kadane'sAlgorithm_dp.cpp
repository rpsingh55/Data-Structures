#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

	  long long maxSubarraySum(int a[], int n){
        long long s1=0,s2 = INT_MIN;
        for(int i =0;i<n;i++){
            s1 += a[i];
            s2 = max(s2,s1);
            if(s1 < 0){
                s1 = 0;
            }
        }
        return s2;
    }

int main(){
    int arr[] = {5,4,8,4,9,46};
    cout<<maxSubarraySum(arr, 6);
}
 
