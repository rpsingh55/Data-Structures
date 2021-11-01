#include<bits/stdc++.h>
#include<vector>
using namespace std;


int merge(int *arr,int low,int mid,int high,int &count){
  int b[high+low],k=0,i=low,j=mid+1;
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


int mergesort(int *arr,int low,int high,int &count){
  if(low < high){
    int mid = (low+high)/2;

    mergesort(arr,low,mid,count);
    mergesort(arr,mid+1,high,count);
    merge(arr,low,mid,high,count);
  }
  return 0;
}

int main(){
  int a[] = {2,4,1,3,5,4556,2354,2,3,324,2,5,433,24,345,9,0};
  int count = 0;
  mergesort(a,0,16,count);
  for(int i=0;i<17;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl<<count;
    return 0;
}
