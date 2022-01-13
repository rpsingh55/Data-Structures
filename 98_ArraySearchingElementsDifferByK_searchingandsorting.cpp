#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int search(int arr[], int n, int x, int k)
{
    	for(int i = 0;i < n;i++){
    	    if(arr[i] == x){
    	        return i;
    	    }
    	}
    	return -1;
}    	

int main(){

   int arr[] =  {3,5,5,5,1};
   cout<<search(arr,5,5,5);

   return 0;
}
 
