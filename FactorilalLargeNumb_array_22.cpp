#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;

int main(){
 int n = 7;
  int temp,i,j,c;
       vector<int> v;
       v.push_back(1);
       for( i=2;i<=n;i++){
          c = 0;
           for( j=0;j < v.size();j++){
             temp = v[j] * i + c;
             v[j] = temp % 10;
             c = temp/10;
           }
              while(c != 0){
                v.push_back(c%10);
                c = c / 10;
            }
       }
        reverse(v.begin(),v.end());
        for(auto it:v){
            cout<<it;
        }
    return 0;
}
