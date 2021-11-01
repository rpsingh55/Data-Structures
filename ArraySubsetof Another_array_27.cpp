#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;

int main(){
 int a1[] = {11, 1, 13, 21, 3, 7},a2[] = {11, 3, 7, 1},n=6,m=4;
 int flag = 1;

 map<int,int> ma;
    int i;
    for(i=0;i<m;i++){
        ma[a2[i]]++;
    }
    for(i=0;i<n;i++){
        ma[a1[i]]++;
    }

    for(i=0;i<m;i++){
        if(ma[a2[i]] <= 1){
            cout<<"No";
            flag = 0;
            break;
        }
    }
    if(flag)
    {
        cout<<"Yes";
        }
    
    return 0;
}
