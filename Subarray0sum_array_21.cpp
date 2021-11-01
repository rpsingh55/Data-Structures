#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;

int main(){
    int a[] = {4,2,-3,1,6},n=5,f=1;
     map<int,int> m;
        m[a[0]]++;
        int sum = a[0];
        for(int i=1;i<n;i++){
            sum += a[i];
            if(sum == 0 || m[sum] != 0){
                cout<<"YES";
                f=0;
                break;
            }
            m[sum]++;
        }
        if(f){
            cout<<"False";
        }
        ; 
        
    return 0;
}
