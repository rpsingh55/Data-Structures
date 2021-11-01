#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;-

string check(int num){
  string s = to_string(num);
  int l = s.length();
    for(int i=0;i<l/2;i++){
        if(s[i] != s[l-i-1]){
            return "NO";
        }
    }
    return "YES";
    }


int main(){
int a[] = {111,222,333,444,555},n=5;
string c = "YES";
   for(int i=0;i<n;i++){
       c = check(a[i]);
       if(c == "NO"){
           break;
       }
   } 
   cout<<c;
    return 0;
}
