#include<bits/stdc++.h>

#define pb push_back
using namespace std;

void Allsentence(vector<vector<string>>v,int k,int c,string jawab){
    if(k == v.size()){
        cout<<jawab<<"\n";
        return;
    }
  
            for(int j = 0;j < v[k].size();j++){
                Allsentence(v,k+1,j,jawab+" "+v[k][j]);
            }
   
}

int main(){
vector<vector<string>> v ={{"you", "we"},
                        {"have", "are"},
                        {"sleep", "eat", "drink"}};
Allsentence(v,0,0,"");
   return 0;
}
 
