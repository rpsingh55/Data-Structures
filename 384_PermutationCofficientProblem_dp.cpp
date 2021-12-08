#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

int pCr(int n,int k){
    int fact[n+1];
    fact[0] = 1;
    for(int i = 1; i <= n;i++){
        fact[i] = i * fact[i-1];
    }
    return fact[n]/fact[n-k];
}

void displayarray(int a[],int n){
for(int i = 0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<"\n";
}
int main(){
    cout<<pCr(10,3);
}
