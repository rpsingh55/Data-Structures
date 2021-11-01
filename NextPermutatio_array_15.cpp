#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool test(vector<int> v) {
    for(int i = v.size()-1; i > 0; i--)
        if(v[i]  > v[i-1])
            return false;
    return true;
}

int main(){
   vector<int> v={1,8,9,7,6,0};
   int i ,j,ind;
    if(test(v)){
          sort(v.begin(), v.end());
           
       }
       else{
        
        for(i=v.size()-1;i>0;i--){
            if( v[i-1] < v[i]){
             int ind = v[i-1];
                for(j=v.size()-1;j >= i ;j--){
                    if(v[j] > ind){
                        swap(v[j],v[i-1]);
                        break;
                    }
                }
                 sort(v.begin()+i,v.end());
                break;
               
            }
        }
       }
        for(i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }

    return 0;
}