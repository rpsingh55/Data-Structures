#include<bits/stdc++.h>

#define pb push_back
using namespace std;

  string removeConsecutiveCharacter(string s)
    {
       int n = s.length();
        for(int i = 0;i<n-1;i++){
            if(s[i] == s[i+1]){
                s.erase(s.begin()+i);
                n--;
                i--;
            }
        }
        return s;
    }

int main(){
   cout<<removeConsecutiveCharacter("gugghhjjg");
   return 0;
}
 
