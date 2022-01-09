#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int majorityElement(int a[], int n)
{
        int index = 0;
        int ginti = 0;
        for(int i = 0;i<n;i++){
            if(a[index] == a[i]){
                ginti++;
            }
            else{
                ginti--;
            }
            if(ginti <= 0){
                ginti = 1;
                index = i;
            }
        }
        int jawab = 0;
        for(int i = 0;i < n;i++){
            if(a[i] == a[index]){
                jawab++;
            }
        }
        return jawab > n/2 ? a[index] : -1;
}

int main(){

   int arr[] =  {3,5,5,5,1};
   cout<<majorityElement(arr,5);

   return 0;
}
 
