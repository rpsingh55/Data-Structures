#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
   int a[] = {12,23,43,45,56,77};
   int b[]= {1,2,3,4,23,45,54};
   int n = 6, m = 7;
   int i = n-1 , j = 0;
   for(i = n-1 ; i >= 0 && j < m ;i--){
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
   for(i =0;i<n;i++){
       cout<<a[i]<<" ";
   }
   for(j=0;j<m;j++){
       cout<<b[j]<<" ";
   }

    return 0;
}