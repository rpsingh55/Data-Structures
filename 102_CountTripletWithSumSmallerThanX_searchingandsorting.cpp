#include<bits/stdc++.h>
#define pb push_back
using namespace std;

	long long countTriplets(long long arr[], int n, long long sum)
	{
	    sort(arr,arr+n);
	    long long  jawab = 0;
	    for(int i = 0;i < n;i++){
	        int ulta = i+1;
	        int seedha = n -1;
	        while(ulta < seedha){
	            int temp = arr[i] + arr[ulta] + arr[seedha];
	            if(temp >= sum){
	                seedha--;
	            }
	            else if(temp < sum){
	                jawab += seedha - ulta;
	                ulta++;
	            }
	        }
	    }
	    return jawab;
	}

int main(){

   long long arr[] =  {3,5,5,5,1};
   cout<<countTriplets(arr,5,10);

   return 0;
}
 
