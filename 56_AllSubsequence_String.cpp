#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
using namespace std;
void  subsequence(string s,int i,string a){
    if(i == s.length()){
        cout<<a<<" ";
        return;
    }
    subsequence(s,i+1,a);
    subsequence(s,i+1,a+s[i]);
}


int main(){

subsequence("abc",0,"");

}
