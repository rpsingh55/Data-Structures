#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

     vector<int> nextPermutation(int n, vector<int> a){
        int store = -1;
       for(int i = n-1; i > 0;i--){
           if(a[i-1] < a[i] ){
               store = i-1;
               break;
           }
       }
       if(store != -1){
           int nextmax;
           nextmax = store+1;
           for(int j = store+1;j<n;j++){
               if(a[j] > a[store] and a[j] < a[nextmax]){
                   nextmax = j;
               }
           }
           swap(a[store],a[nextmax]);
           sort(a.begin()+store+1,a.end());
       }
       else{
           sort(a.begin(),a.end());
       }
       
       return a;
    }
void displayvector(vector<int> v){
for(auto i:v){
    cout<<i<<" ";
}
cout<<"\n";
}
void displayarray(int a[],int n){
for(int i = 0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<"\n";
}
int main(){
vector<int> v;
v.pb(534);
v.pb(553);
v.pb(524);
v.pb(435);
v.pb(245);
v.pb(52);
displayvector(v);
v = nextPermutation(6,v);
displayvector(v);
}
