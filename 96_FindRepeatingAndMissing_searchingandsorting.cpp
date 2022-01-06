#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int *findTwoElement(int arr[], int n) {
       int *jawab = new int[2];
       for(int i = 0;i<n;i++){
           if(arr[abs(arr[i])-1] > 0){
               arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
           }
           else{
               jawab[0] = abs(arr[i]);
           }
       }
       for(int i = 0;i<n;i++){
           if(arr[i] > 0){
               jawab[1] = i + 1;
               break;
           }
       }
       return jawab;
    }

int main(){

   int arr[] =  {3,2,5,5,1};
   int *jawab = findTwoElement(arr,5);
   cout<<jawab[0]<<" "<<jawab[1];

   return 0;
}
 
