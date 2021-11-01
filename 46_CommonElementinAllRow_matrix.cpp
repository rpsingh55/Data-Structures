#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
using namespace std;

int main(){
map<int,int> m;
int n = 4,k=5;
int a[n][k] = {{1, 2, 1, 4, 8},
             {3, 7, 8, 5, 1},
             {8, 7, 7, 3, 1},
             {8, 1, 2, 7, 9},
            };
int i,j;
for(i=0;i<n;i++){
    set<int> s;
    for(j=0;j<k;j++){
        s.insert(a[i][j]);
    }
    for(auto it:s){
        m[it]++;
    }
}
for(auto it:m){
    if(it.second >= n){
        cout<<it.first<<" ";
    }
}
       return 0;

}
