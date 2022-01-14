#include<bits/stdc++.h>
#define pb push_back
using namespace std;

     static bool jaroori(int a, int b){
        int ginti1 = 0;
        int ginti2 = 0;
        
        while(a){
            ginti1 += a & 1;
            a = a >> 1;
        }
        
        while(b){
            ginti2 += b & 1;
            b = b >> 1;
        }
        
        return ginti1 > ginti2;
    }
    
    void sortBySetBitCount(int arr[], int n)
    {
        stable_sort(arr,arr+n,jaroori);
        for(int i = 0;i < n;i++){
            cout<<arr[i]<<" ";
        }
    }

int main(){

   int arr[] =  {3,5,15,5,15,9};
    sortBySetBitCount(arr,6);
   return 0;
}
 
