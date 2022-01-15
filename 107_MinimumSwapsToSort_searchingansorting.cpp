#include<bits/stdc++.h>
#define pb push_back
using namespace std;

	int minSwaps(vector<int>&nums)
	{
	    vector<vector<int>> v;
	    int n = nums.size();
	    for(int i = 0;i < n;i++){
	        v.push_back({nums[i] , i});
	    }
	    sort(v.begin(),v.begin()+n);
	    int jawab = 0;
	    for(int i = 0;i < n;i++){
	        if(v[i][1] != i){
	            swap(v[i],v[v[i][1]]);
	            i--;
	            jawab++;
	        }
	    }
	    return jawab;
	}

int main(){

    vector<int> arr =  {3,5,15,5,15,9};
    cout<<minSwaps(arr);
   return 0;
}
 
