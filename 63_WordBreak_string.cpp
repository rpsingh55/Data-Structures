#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

int wordBreak(string s, vector<string> &v) {
        if(s.length() == 0){
            return 1;
        }
        int ret = 0;
            for(int i = 0; i < s.length();i++){
                string l = s.substr(0,i+1);
                if(find(v.begin(), v.end(), l) != v.end()){
                  ret = wordBreak(s.substr(i+1),v);
                  if(ret == 1){
                      break;
                  }
                }
            }
        return ret;
    }

void displayarray(int a[],int n){
for(int i = 0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<"\n";
}
int main(){
vector<string> v;
v.push_back("Ra");
v.push_back("Ram");
v.push_back("i");
v.push_back("am");
v.push_back("a");
cout<<wordBreak("iamRam",v);

}
