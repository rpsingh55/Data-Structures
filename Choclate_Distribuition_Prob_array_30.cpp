#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;

int main(){
vector<long long> a = {3, 4, 1, 9, 56, 7, 9, 12};
long long n=8,m=5;
   sort(a.begin(), a.end());
     long long mini = LLONG_MAX;
     for(long long i=0;i+m-1 < n;i++){
         mini = min(a[m+i-1]-a[i],mini);
     }
     cout<<mini;
    return 0;
}
