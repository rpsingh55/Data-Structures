#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;


int main(){
            vector<int> v = {90,100,78,89,67};
		    sort(v.begin(),v.end());
		    int n = v.size();
		    if(n%2 == 0){
		        return (v[n/2]+v[(n/2)-1])/2;
		    }
		    cout<<v[n/2];
    return 0;
}
