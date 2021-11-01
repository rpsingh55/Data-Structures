#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;

int main(){
  int n = 7;
  int a[] = {2,6,1,9,4,5,3};
  set<int> s;
      int i ,c =1,ans = 1;
      for(i=0;i<n;i++){
         s.insert(a[i]);
      }
      int k = 0, previous;
       for ( auto it = s.begin(); it != s.end(); it++ ){
           if(k == 0){
               k = 1;
               previous = *it;
           }
           else{
               ans = max(c,ans);
               if(previous+1 == *it){
                  c++; 
                  previous = *it;
               }
               else{
                   c = 1;
                   previous = *it;
               }
           }
       }
       ans = max(ans,c);
       cout<<ans;
    return 0;
}
