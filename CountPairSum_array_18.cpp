#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;

int main(){
    int arr[] = {1,5,5,7},k=6;
      map<int,int> m;
        int count=0;
        for(int i=0;i<4;i++){
            if(arr[i] >= k){
                continue;
            }
            else if(m[k-arr[i]] == 0){
                m[arr[i]]++;
            }
            else if(m[k-arr[i]] != 0){
                count += m[k-arr[i]];
                m[arr[i]]++;
            }
        }
        cout<<count;
    return 0;
}
