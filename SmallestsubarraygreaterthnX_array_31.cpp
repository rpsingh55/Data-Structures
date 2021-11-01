#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;

int main(){
int a[] = {1, 4, 45, 6, 0, 19},n=6,x=51;
int su = 0,c=INT_MAX,i,l,j;
         for(i=0;i<n;i++){
            su = a[i];
            l=1;
            if(su > x){
                c = 1;
                break;
            }
            for(j =i+1;j<n;j++){
                if(su > x){
                    c = min(l,c);
                    break;
                }
                su += a[j];
                l++;
                if(j==n-1 && su > x){
                c = min(l,c);
                }
            
            }
         }
         cout<<c;
    return 0;
}
