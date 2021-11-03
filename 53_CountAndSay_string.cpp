#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
using namespace std;

 string count(string a){
     int c = 1,i;
    string ans = "";
        for(i=1;a[i] != '\0';i++){
            if(a[i] == a[i-1]){
                c += 1;
            }
            else{
                ans += to_string(c) + a[i-1];
                c = 1;
            }
        }
        ans += to_string(c)+a[i-1];
        return ans;
    }
    
    
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        string s = "1";
        for(int i = 1;i<n;i++){
            s = count(s);
        }
        return s;
        
    }

int main(){

int n = 15;
cout<<countAndSay(n);
}
