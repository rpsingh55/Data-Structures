#include<bits/stdc++.h>
#define pb push_back
using namespace std;



   
    int merge(long long int *arr,long long int low,int mid,long long int high,long long int &count){
  long long int b[high],k=0,i=low,j=mid+1;
  while(i <= mid && j <= high){
    if(arr[i] <= arr[j]){
      b[k] = arr[i];
      i++;
      k++;
    }
    else{
        count += (mid-i+1);
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

int mergesort(long long int *arr,long long int low,long long int high,long long int &count){
  if(low < high){
    long long int mid = (low+high)/2;

    mergesort(arr,low,mid,count);
    mergesort(arr,mid+1,high,count);
    merge(arr,low,mid,high,count);
  }
  return 0;
}


    long long int inversionCount(long long a[], long long n)
    {
        long long int count = 0;
        mergesort(a,0,n-1,count);
        return count;
    }
    
    
 


int main(){

	long long  arr[] =  {3,5,15,5,15,9};
    cout<<inversionCount(arr,6);
	
   return 0;
}
 
