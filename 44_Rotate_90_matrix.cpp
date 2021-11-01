#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
using namespace std;

int main(){
int n = 4;
 int a[n][n] = { { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 9, 10, 11, 12 },
                      { 13, 14, 15, 16 } };
int i,j,a1[n][n],k=0;
for(i=0;i<n;i++){
    k = 0;
    for(j=n-1;j>=0;j--){
        a1[i][k] = a[j][i];
        k++;
    }
}
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        cout<<a1[i][j]<<" ";
    }
    cout<<"\n";
}

       return 0;

}
