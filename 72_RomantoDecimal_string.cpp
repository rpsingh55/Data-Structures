#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

   int romanToDecimal(string &s) {
        map<char,int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        int jawab = m[s[s.length()-1]];
        for(int i = 0;i < s.length()-1;i++){
            if(m[s[i]] >= m[s[i+1]]){
                jawab += m[s[i]];
            }
            else{
                jawab -= m[s[i]];
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
    string s = "LV";
    cout<<romanToDecimal(s);
}
