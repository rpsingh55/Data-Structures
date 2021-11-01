#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
   int a[] = {12,23,43,45,56,77};
   
   int n = 6,i;
   long long s2=INT_MIN,s1=0;
   for(i=0;i<n;i++){
       s1 += a[i];
       s2 = max(s2,s1);
       if(s1 < 0){
           s1 = 0;
       }
   }
   cout<<s2<<" ";
    return 0;
}