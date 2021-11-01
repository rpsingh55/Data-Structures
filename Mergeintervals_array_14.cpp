#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> vect = {{1,4},{0,4}};

 sort(vect.begin(), vect.end());
        int i,j,n=vect.size();
        vector<vector<int>> p;
        for(i=0;i<n;){
            for(j = i+1;j<n;j++){
                if(vect[j][0] <= vect[i][1]){
                
                    vect[i][1] = max(vect[i][1],vect[j][1]);
                 
                    
                }
                else{
                    break;
                }
            }
                p.push_back(vect[i]);
            i = j;
            
        }
        for(i=0;i<p.size();i++){
            for(j=0;j<2;j++){
                cout<<p[i][j]<<" ";
            }
            cout<<endl;
        }
    return 0;
}