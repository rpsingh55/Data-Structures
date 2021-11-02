#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
using namespace std;

bool shufflecheck(string s, string s1, string s2){
    if(s.size() != s1.size() + s2.size()){
        return false;
    }
    map<char,int> m;
    int i, j = s.size();
    s1 = s1 + s2;
    for(i=0; s[i] != '\0';i++){
        m[s[i]]++;
    }
    for(i=0;i < j;i++){
        m[s1[i]]--;
    }
    for(i = 0;i<j;i++){
        if(m[s[i]] != 0){
            return false;
        }
    }
    return true;
}

int main(){

if(shufflecheck("1XY2", "Y2", "1X")){
    cout<<"Primary string is well shuffled of other 2 strings";
}
else{
    cout<<"Primary string is not  shuffled from other 2 strings";
}

}
