#include<bits/stdc++.h>
#define pb push_back
using namespace std;



   
    int merge(long long int arr[],long long int low,int mid,long long int high){
  long long int b[high],k=0,i=low,j=mid+1;
  while(i <= mid && j <= high){
    if(arr[i] <= arr[j]){
      b[k] = arr[i];
      i++;
      k++;
    }
    else{
      b[k] = arr[j];
      j++;
      k++;
    }
  }
    while (i <= mid)
    {
      b[k] = arr[i];
      i++;
      k++;
  }
     while (j <= high)
    {
      b[k] = arr[j];
      j++;
      k++;
  }
  k=0;
  for(i=low;i<=high;i++){
    arr[i] = b[k];
    k++;
  }
  return 0;
}

int mergesort(long long int arr[],long long int low,long long int high){
  if(low < high){
    long long int mid = (low+high)/2;

    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
  }
  return 0;
}

    
 


int main(){

	long long int arr[] =  {3,5,15,5,15,9};
    mergesort(arr,0,5);
	
   return 0;
}
 
