#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

string keypadnumber(string s){
string a[] = {"2","22","222","3","33","333","4","44","444",
"5","55","555","6","66","666", "7","77","777","7777","8","88","888","9","99","999","9999"};
string ans = "";
for(auto i : s){
    if(i == ' '){
        ans += "0";
    }
    else{
        ans += a[i-'A'];
    }
  }
  return ans;
}

void displayarray(int a[],int n){
for(int i = 0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<"\n";
}
int main(){
    cout<<keypadnumber("RPSINGH JADON");
}
