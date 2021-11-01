#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
using namespace std;

int main(){
  vector<vector<int>> a =  {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
  int t = 3;
  string b = "False";
  int m = a.size(),n=a[0].size(),i,j;
        for(i=0;i<m;i++){
            if(t >= a[i][0] && t <= a[i][n-1])
            {
            for(j=0;j<n;j++){
                if(a[i][j] == t){
                    b = "True";
                    goto theend;
                }
            }
        }
    }
    theend:
        cout<<b;
    return 0;
}
