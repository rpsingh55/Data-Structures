#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;

int main(){
int a[ ] = {2, 7, 9, 5, 8, 7, 4},k=6,n=7; 
        int c = 0,maxc=INT_MAX,i,j=0,p=0;
        for(i=0;i<n;i++){
            if(a[i] <= k){
                c++;
            }
        }
        for(i=0;i<c;i++){
            if(a[i] > k){
                p++;
            }
        }
        i = 0,j = c;
        maxc = p;
     while(j < n){
         if(a[i] > k){
             p--;
         }
         if(a[j] > k){
             p++;
         }
         maxc = min(maxc,p);
         j++;i++;
     }
        cout<<maxc;
    return 0;
}
