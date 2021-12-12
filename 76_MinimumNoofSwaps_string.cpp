#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

   int minimumNumberOfSwaps(string s){
         int close = 0, open = 0,jawab = 0,makkari = 0;
         int n = s.length();
         for(int i = 0; i < n;i++){
             if(s[i] == ']'){
                 close++;
             }
             else{
                 if(makkari > 0){
                     jawab += makkari;
                 }
                 open++;
             }
             makkari = close - open;
         }
         return jawab;
    }


int main(){
    cout<<minimumNumberOfSwaps("[]]][[");
}
 
