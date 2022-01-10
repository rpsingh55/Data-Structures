#include<bits/stdc++.h>
#define pb push_back
using namespace std;

bool findPair(int arr[], int size, int n){
    map<int,int> m;
    sort(arr,arr+size);
    for(int i = 0; i < size; i++){
        m[arr[i]] = abs(n - arr[i]);
        if(m[abs(n-arr[i])] != 0){
            return true;
        }
    }
    return false;
}

int main(){

   int arr[] =  {3,5,5,5,1};
   cout<<findPair(arr,5,4);

   return 0;
}
 
