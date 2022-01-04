#include<bits/stdc++.h>
#define pb push_back
using namespace std;

vector<int> valueEqualToIndex(int arr[], int n) {
	    vector<int> v;
	    for(int i = 0; i < n;i++){
	        if(arr[i] == i+1){
	            v.push_back(i+1);
	        }
	    }
	    return v;
	}

int main(){
    int arr[] = {1,2,3,4,5,5,5,5,5,6,7,8,9};
   vector<int> v = valueEqualToIndex(arr,14);
   for(auto i : v){
       cout<<i<<" ";
   }
   return 0;
}
 
