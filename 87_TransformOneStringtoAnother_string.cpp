#include<bits/stdc++.h>

#define pb push_back
using namespace std;

int minoperation(string s1,string s2){
    int n = s1.length(), m = s2.length();
    if(n != m){
        return -1;
    }
    int ginti[256] = {0};
    for(auto i : s1){
        ginti[i]++;
    }
    for(auto i : s2){
        ginti[i]--;
    }
    for(int i = 0; i < 256;i++){
        if(ginti[i]){
            return -1;
        }
    }
    int jawab = 0;
    for(int i = m-1,j = m-1; i >= 0;){
        if(s1[i] != s2[j]){
            i--;
            jawab++;
        }
        else{
            i--;
            j--;
        }
    }
    return jawab;
}

int main(){
   cout<<minoperation("EACBDHPST","EHPSTABCD");
   return 0;
}
 
