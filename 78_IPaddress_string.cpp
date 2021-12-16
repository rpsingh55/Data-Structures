#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

   bool isvalid(string s){
        if(s.length()>3)
            return false;
        if(s[0] == '0' and s.length() > 1)
            return false;
    int val;
     stringstream obj;  
     obj << s;  
     obj >> val;
        if(val < 0 || val > 255)
            return false;
        return true;
    }
    vector<string> restoreIpAddresses(string s) {
        int n = s.length();
        vector<string> v;
        for(int i = 1;i <= 3 && i < n;i++){
            string f = s.substr(0,i);
            if(isvalid(f)){
                for(int j = 1; j <= 3 && i + j < n;j++){
                    string se = s.substr(i,j);
                    if(isvalid(se)){
                        for(int  k = 1;k <= 3 && i+j+k < n;k++){
                            string t = s.substr(i+j,k);
                            string fo = s.substr(i+j+k);
                            if(isvalid(t) && isvalid(fo)){
                                v.push_back(f+"."+se+"."+t+"."+fo);
                            }
                        }
                    }
                }
            }
        }
        return v;
    }

int main(){
   vector<string> v = restoreIpAddresses("25525511135");
  for(auto i : v)
    cout<<i<<" ";
}
 
