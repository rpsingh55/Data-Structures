#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;

int main(){
  vector<vector<int>> a = {{1, 2, 3, 4},
           {5, 6, 7, 8},
           {9, 10, 11, 12}};
           int r = 3,c = 4;
  int no = r*c,s=0;
        vector<int> l;
    int i,j,k,m,n;
    for(i=0;i<r;i++){
        for(j=i;j<c;j++){
            l.push_back(a[i][j]);
            s++;
              if(s==no){
            goto theEnd;
        }
        }
       
        for(k=i+1;k<r-1;k++){
            l.push_back(a[k][c-1]);
            s++;
             if(s==no){
            goto theEnd;
        }
        }
        
        for(m=c-1;m > i && m > 0;m--){
            l.push_back(a[r-1][m]);
            s++;
             if(s==no){
           goto theEnd;
        }
        }
        
        for(n=r-1;n>i && n > 0;n--){
            l.push_back(a[n][i]);
            s++;
            
        if(s==no){
            goto theEnd;
        }
        }
      
        c--;
        r--;
        if(c <= 1)break;
    }
    theEnd:
    for(i=0;i<no;i++){
      cout<<l[i]<<" ";
    }
    return 0;
}
