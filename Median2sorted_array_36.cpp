#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;


int main(){
    vector<int> v1 = {-5, 3, 6, 12, 15};
    vector<int> v2 = {-12, -10, -6, -3, 4, 10};
    int i,k=v1.size();
     vector<int> v;
    for(i=0;i<k;i++){
      v.push_back(v1[i]);
    }
     for(i= k;i< k+v2.size();i++){
      v.push_back(v2[i-k]);
    }
    
		    sort(v.begin(),v.end());
		    int n = v.size();
            for(i=0;i<n;i++){
                cout<<v[i]<<" ";
           }
           cout<<"\n";
		    if(n%2 == 0){
		        cout<<(v[n/2]+v[(n/2)-1])/2;
		    }
           {
		   cout<<v[(n/2)];
            }
    return 0;
}
