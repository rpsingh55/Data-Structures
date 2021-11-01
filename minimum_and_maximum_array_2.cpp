#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
   int a[8] = {1,2,3,4,5,55,243,0};
   int n= 8,mini,maxi,i;
   if(n == 1){
       maxi = a[0];
       mini = a[0];
   }
   else{
       mini = min(a[0],a[1]);
       maxi = max(a[0],a[1]);
           for(i=2;i<n;i++){
           if(a[i] < mini){
               mini = a[i];
           }
           else if(a[i] > maxi){
               maxi = a[i];
           }
       }
   }
   cout<<"Minimum number is -> "<<mini<<" and Maximum number is -> "<<maxi;
   
   return 0; 
}