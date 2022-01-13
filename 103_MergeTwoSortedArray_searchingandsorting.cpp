#include<bits/stdc++.h>
#define pb push_back
using namespace std;

	void merge(int a[], int b[], int n, int m) {
	    int i,j=0;
	    for(i =n-1; i>=0 && j < m;i--){
	        if(a[i] > b[j]){
	            swap(a[i],b[j]);
	            j++;
	        }
	        else{
	            break;
	        }
	    }
	    sort(a,a+n);
	    sort(b,b+m);
        for(int i = 0;i < n;i++){
            cout<<a[i]<<" ";
        }
          for(int i = 0;i < n;i++){
            cout<<b[i]<<" ";
        }
	}

int main(){

   int arr[] =  {3,5,5,5,9};
   int arr2[] =  {3,4,7,8,15};
   merge(arr,arr2,5,5);
   return 0;
}
 
