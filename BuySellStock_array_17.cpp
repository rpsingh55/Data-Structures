#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
  vector<int> v = {7,1,5,3,6,4};
  int n = v.size();
  int max1 = 0, min1 = INT_MAX,i;
  for(i=0;i<n;i++){
    if(min1 > v[i]){
      min1 = v[1];
    }
    else{
      max1 = max(max1,v[i]-min1);
    }
  }
  cout<<max1;
    return 0;
}
