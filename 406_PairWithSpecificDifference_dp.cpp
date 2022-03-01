#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

int maxSumPairWithDifferenceLessThanK(int arr[], int n, int k)
    {
        sort(arr, arr + n);
        int jawab = 0;
        for(int i = n - 1; i > 0; i--){
            if(arr[i] - arr[i - 1] < k){
                jawab += arr[i] + arr[i-1];
                i -= 1;
            }
        }
        return jawab;
    }
 


int main(){
    int arr[] = {5,4,8,4,9,46};
    cout<<maxSumPairWithDifferenceLessThanK(arr,6,5);
}
 
