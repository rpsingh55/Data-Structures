#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;

int main(){
 int a[] = {3,0,0,2,0,4},n=6;
 int left[n],right[n],i,j,temp;
        int lmax = INT_MIN,rmax = INT_MIN;
        long long sum1=0;
        for(i=0;i<n;i++){
            lmax = max(lmax,a[i]);
            rmax = max(rmax,a[n-1-i]);
            left[i] = lmax;
            right[n-i-1] = rmax;
        }
        for(i=1;i<n-1;i++){
            temp = min(left[i-1],right[i+1])-a[i];
            if(temp > 0){
            sum1 += temp;
            }
        }
        cout<<sum1;
    return 0;
}
