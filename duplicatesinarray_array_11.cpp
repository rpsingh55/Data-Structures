#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
   vector<int> v={1,2,4,5,6,8,2,4,6,2};
   for(unsigned int i =0;i<v.size();i++){
       if(v[abs(v[i])] >= 0){
           v[abs(v[i])] = - v[abs(v[i])];
       }
       else{
           cout<<abs(v[i]);
           break;
       }
   }
      

    return 0;
}