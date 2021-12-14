#include<bits/stdc++.h>
#define pb push_back
using namespace std;

      vector<vector<string> > Anagrams(vector<string>& v) {
        map<string,int> m;
        vector<string> temp;
        int n = v.size();
        for(auto i : v){
            string s = i;
             sort(s.begin(),s.end());
            temp.push_back(s);
        }
            vector<vector<string>> jawab;
            for(int i = 0;i<n;i++){
                if(m[temp[i]] == 0){
                    m[temp[i]] = 1;
                    vector<string> temp2;
                    for(int j = i;j<n;j++){
                        if(temp[i] == temp[j]){
                            temp2.push_back(v[j]);
                        }
                    }
                    jawab.push_back(temp2);
                }
        }
        return jawab;
    }


int main(){
    vector<string> v;
    v.pb("act");
    v.pb("dog");
    v.pb("odg");
    v.pb("tac");
    v.pb("cat");
    Anagrams(v);
}
 
