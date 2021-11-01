#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
using namespace std;

int main(){

int a[][4] = {{16, 28, 60, 64},
                   {22, 41, 63, 91},
                   {27, 50, 87, 93},
                   {36, 78, 87, 94 }};
int n =4,k = 5;
  vector<int> v;
  for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
          v.push_back(a[i][j]);
      }
  }
  sort(v.begin(),v.end());
  cout<<v[k-1];
}
