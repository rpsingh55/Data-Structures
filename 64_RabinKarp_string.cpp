#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

 void rabinkarp(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();
        int flag = 1;
        if(m == 0 or haystack == needle){
            cout<<0;
        }
        for(int i = 0;i+m <= n;i++){
            if(haystack.substr(i,m) == needle){
                cout<<i<<" ";
                flag = 0;
            }
        }
        if(flag){
            cout<<-1;
        }
    }

void displayarray(int a[],int n){
for(int i = 0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<"\n";
}
int main(){
    rabinkarp("rampratapsinghpratap","pratap");
}
