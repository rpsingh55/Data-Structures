#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;

int main(){
 int a[] = {11, 1, 13, 21, 3, 7},n=6,x=15;
 bool flag = false;
    int i=0,j=0,k=0,sum1,temp;
    sort(a,a+n);
    for(i=0;i<n;i++){
        temp = a[i];
        sum1=0;
        j = i+1;
        k = n-1;
        while(j!=k && j < n && k >=0){
            sum1 = temp+a[j]+a[k];
            if(sum1 < x){
                j++;
            }
            else if(sum1 > x){
                k--;
            }
            else{
                flag = true;
                break;
            }
        }
    }
    cout<<flag;
    
    return 0;
}
