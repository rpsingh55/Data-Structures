#include<bits/stdc++.h>
#include<queue>
#include<algorithm>
#include<set>
using namespace std;

int main()
{
int a[] = {0,1,2,0,-4,2,-1,55};
  int i,min1 = INT_MAX,max1=INT_MIN,k=5,n=8;
       sort(a,a+n);
    max1 = a[n-1]-k;
    min1 = a[0] + k ;
    int s = a[n-1]-a[0];
    for(i=0;i<n-1;i++){
        int m1 = min(min1,a[i+1]-k);
        int m2 = max(max1,a[i]+k);
        if(m1 < 0) continue;
        s = min(s,m2-m1);
    }
    cout<<s;
}

