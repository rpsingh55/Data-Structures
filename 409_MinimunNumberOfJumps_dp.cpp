#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

	 int minJumps(int a[], int n){
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
      return jump;
      
    }
 


int main(){
    int arr[] = {5,4,8,4,9,46};
    cout<<minJumps(arr,6);
}
 
