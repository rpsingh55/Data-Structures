#include<bits/stdc++.h>
#include<queue>
#include<algorithm>
#include<set>
using namespace std;

int main()
{
int a[] = {0,1,2,0,-4,2,-1,55};
 int i,n=8,s1=INT_MIN,s2=0;
 for(i=0;i<n;i++){
     s2 = s2 + a[i];
     if(s2 > s1){
         s1 = s2;
     }
     if(s2 < 0){
         s2 = 0;
     }
 }
 cout<<s1;
}

