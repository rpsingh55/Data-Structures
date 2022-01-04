#include<bits/stdc++.h>
#define pb push_back
using namespace std;


vector<int> find(int arr[], int n , int x )
{
    vector<int> v;
    int first = -1, last = -1,flag = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == x && flag == 0){
            first = i;
            last = i;
            flag = 1;
        }
        if(arr[i] == x and flag){
            last = i;
        }
    }
    v.pb(first);
    v.pb(last);
    cout<<first<<" "<<last;
    return v;
}

int main(){
    int arr[] = {0,1,2,3,4,5,5,5,5,5,6,7,8,9};
    find(arr,14,5);
   return 0;
}
 
