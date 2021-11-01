#include<bits/stdc++.h>
#include<queue>
#include<algorithm>
#include<set>
using namespace std;

int main()
{
int a[] = {0,1,2,0,-4,2,-1,55};
 int i,n=8;
    int temp = a[n-1];
    for(i=n-1;i>0;i--){
        a[i] = a[i-1];
    }
    a[0] = temp;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

