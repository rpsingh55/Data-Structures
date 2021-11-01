#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;

int main(){
  int a[] =   {2,4,2,6,2,3}, n=6,i,j,mi=a[n-1],mp=0;
  int b[n] = {0};
  for(i=n-2;i>=0;i--){
      mi = max(mi,a[i]);
      mp = max(b[i+1],mi-a[i]);
      b[i] = mp;
  }
cout<<endl;
  mi = a[0];
  mp = b[0];
  for(i=1;i<n;i++){
      mi = min(mi,a[i]);
      mp = max(b[i-1],a[i]-mi+b[i]);
      b[i] = mp;
  }
cout<<endl;
  cout<<b[n-1];
    return 0;
}
