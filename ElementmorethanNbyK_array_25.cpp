#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;

int main(){
    vector<int> v = {8,546,43,5,5,2,1,2};
    int k = 3 ,n = 8;
    // can also be performed by sorting
    map<int,int> m;
    for(auto it:v){
        m[it]++;
    }
    int x = n/k;
    for(auto it:v){
        if(m[it] >= x){
            cout<<it<<" ";
            m[it] = 0;
        }
    }
    return 0;
}
