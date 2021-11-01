#include<bits/stdc++.h>
#include<queue>
#include<algorithm>
using namespace std;

int main()
{
int a[8] = {0,1,2,0,-4,2,-1,55};
  int i,j=0,n=8;
  for(i=0;i<n;i++){
      if(a[i] < 0 ){
         
            swap(a[i],a[j]);
         j++;
      }
   
  }
  for(i=0;i<8;i++)
  { 
      cout<<a[i]<<" ";
  }
  
}
