#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;
    
    	int AlternatingaMaxLength(int nums[], int n){
            if(n == 1) return (1);
            int ma = 1, mi = 1;
            for(int i = 1; i < n; i++){
                if(nums[i] > nums[i-1]){
                    ma = mi + 1;
                }
                else if(nums[i] < nums[i-1]){
                    mi = ma + 1;
                }
            }
            return (max(mi,ma));
		}

int main(){
    
    int arr[] = {5,4,8,4,9,46};
    cout<<AlternatingaMaxLength(arr,6);
}
 
