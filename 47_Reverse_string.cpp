#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
using namespace std;

int main(){
vector<char> s = {'h','e','l','l','o'}; 
   int n = s.size();
        for(int i=0;i<n;i++){
            swap(s[i],s[n-1]);
            n--;
        }
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
       return 0;

}
