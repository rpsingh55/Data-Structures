#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
using namespace std;

int main(){

  vector<vector<int>> matrix = {{1}, {2}, {3}};
  int r = 3 ,c = 1;
    vector<int> v;
          int i,j;
          for(i=0;i<r;i++){
              for(j=0;j<c;j++){
                  v.push_back(matrix[i][j]);
              }
          }
          sort(v.begin(),v.end());
          cout<<v[(r*c)/2];
    return 0;
}
