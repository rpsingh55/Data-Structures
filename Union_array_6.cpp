#include<bits/stdc++.h>
#include<queue>
#include<algorithm>
#include<set>
using namespace std;

int main()
{
int a[] = {0,1,2,0,-4,2,-1,55};
int b[] = {34,232,1,2,55};
int n = 8,m = 5,i;
set<int> s;
for(i=0;i<n;i++)
  s.insert(a[i]);
for(i=0;i<m;i++)
  s.insert(b[i]);
cout<<s.size();
}

