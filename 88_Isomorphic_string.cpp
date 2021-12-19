#include<bits/stdc++.h>

#define pb push_back
using namespace std;

 bool areIsomorphic(string str1, string str2)
    {
        int v1[256] ={0};
        int v2[256] ={0};
        int n = str1.length(),m = str2.length();
        if(n != m){
            return false;
        }
        for(int i = 0; i < n;i++){
            v1[str1[i]]++;
            v2[str2[i]]++;
            if(v1[str1[i]] != v2[str2[i]]){
                return false;
            }
        }
        return true;
    }

int main(){

cout<<areIsomorphic("aab","xxy");
   return 0;
}
 
