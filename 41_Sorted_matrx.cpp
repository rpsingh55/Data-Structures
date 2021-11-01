#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
using namespace std;

int main(){
vector<vector<int>> a = {{10,20,30,40},{15,25,35,45},
{27,29,37,48} ,
{32,33,39,50}};
int n =4;
  vector<int> v;
        int i,j,k=0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                v.push_back(a[i][j]);
            }
        }
        sort(v.begin(),v.end());
          for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                a[i][j] = v[k];
                k++;
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
        }


       
    return 0;
}
