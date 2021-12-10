#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

 string longestCommonPrefix(vector<string>& v) {
        int len = INT_MAX;
        for(auto i :v){
            if(i.length() < len){
                len = i.length();
            }
        }
        int c = 0;
        for(int i = 0;i < len;i++){
            for(int j = 0;j < v.size();j++){
                if(v[0][i] != v[j][i]){
                     return v[0].substr(0,c);
                }
            }
                c++;
        }
        string s = v[0].substr(0,c);
        return s;
    }

void displayarray(int a[],int n){
for(int i = 0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<"\n";
}
int main(){
    vector<string> v;
    v.push_back("flow");
    v.push_back("flight");
    v.push_back("flower");
    v.push_back("flowdf");
    cout<<longestCommonPrefix(v);
}
