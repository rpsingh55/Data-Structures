#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

int countRev (string s)
{
    int o = 0,c = 0,ginti=0;
    for(auto i : s){
        if(i == '{'){
            o++;
        }
        else{
            c++;
        }
        if(c > o){
            ginti++;
            c--;
            o++;
        }
    }
    if((c+o) % 2 == 0){
        return ((o-c)/2 + ginti);
    }
    return -1;
}

void displayarray(int a[],int n){
for(int i = 0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<"\n";
}
int main(){
    cout<<countRev("{}}}}{}{}{{}}{");
}
