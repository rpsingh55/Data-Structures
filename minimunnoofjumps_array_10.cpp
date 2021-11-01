#include<bits/stdc++.h>
using namespace std;

int main(){
   int a[11] = {1,3,5,8,9,2,6,7,6,8,9},n=11;
         int i=0,jump=1,step=a[0],reach=a[0];
      if(n==1){
          return 0;
      }
      if(a[0] == 0){
          return -1;
      }
      for(i=1;i<n-1;i++){
          reach = max(reach,i+a[i]);
          step--;
          if(step == 0){
              step = reach - i;
              jump++;
              if(i >= reach){
                  return -1;
              }
          }
      }
      cout<<jump;

    return 0;
}