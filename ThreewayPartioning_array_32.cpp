#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;

int main(){
vector<int> a = {1, 2, 3, 3, 4};
int c = 1,b=2;
int i,j=0,k=a.size()-1;
      for(i=0;i<=k;){
          if(a[i] < c){
              swap(a[j],a[i]);
              j++;
              i++;
          }
          else if(a[i] > b){
              swap(a[k],a[i]);
              k--;
          }
          else{
              i++;
          }
      }
      for(i=0;i<a.size();i++){
          cout<<a[i];
      }
    return 0;
}
