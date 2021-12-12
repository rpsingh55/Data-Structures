#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

   string secFrequent (string arr[], int n)
    {
        int max1 = 0, max2 = 0;
        map<string,int> m;
        string jawab = "";
        for(int i = 0; i < n;i++){
            if(m[arr[i]] == 0){
                m[arr[i]] = 1;
            }
            else{
                m[arr[i]]++;
            }
            if(m[arr[i]] > max1){
                max1 = m[arr[i]];
            }
        }
        for(auto i : m){
            if(i.second != max1 && i.second > max2){
                max2 = i.second;
                jawab = i.first;
            }
        }
        return jawab;
    }

void displayarray(int a[],int n){
for(int i = 0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<"\n";
}
int main(){
    string arr[] = {"aaa", "bbb", "ccc", "bbb", "aaa", "aaa"};
    cout<<secFrequent(arr,6);
}
 
