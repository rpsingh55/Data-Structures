#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;

int main(){
    int a[] = {1,5,5,7},b[]={1,2,3},c[]={1,7,4},n1=4,n2=3,n3=3;
    int i,j;
            map<int,int> m;
            vector<int> v;
            for(i=0;i<n1;i++){
                if(m[a[i]] == 0){
                    m[a[i]]++;
                }
            }
              for(i=0;i<n2;i++){
                if(m[b[i]] == 1){
                    m[b[i]]++;
                }
            }
              for(i=0;i<n3;i++){
                if(m[c[i]] == 2){
                    m[c[i]]++;
                }
            }
            for(i=0;i<n1;i++){
                if(m[a[i]] == 3){
                    v.push_back(a[i]);
                    m[a[i]] = 0;
                }
            }
            for(auto it:v){
                cout<<it<<" ";
            }
           
        
    return 0;
}
