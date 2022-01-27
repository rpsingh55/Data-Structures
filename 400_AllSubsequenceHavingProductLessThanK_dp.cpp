#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

   int numSubarrayProductLessThanK(int nums[], int k,int n) {
        long i=0,j=0,mul=1, ans=0;
        if (k==0 || k==1)return 0;
        for(j=0;j<n;j++){
            
            mul*=nums[j];
            
            while(mul>k-1) mul/=nums[i++];
            
            ans+=(j-i+1);
        }
        
        return ans;
    }


int main(){
    int arr[] = {5,4,8,4,9,46};
    cout<<numSubarrayProductLessThanK(arr , 60, 6);
}
 
