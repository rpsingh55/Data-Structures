#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;

int main(){
    vector<int> v = {6, -3, -10, 0, 2};
  long long s = LLONG_MIN ,c =1;
	    for(int i=0;i<v.size();i++){
	        for(int j = i;j>=0;j--){
	            c = c * v[j];
	            s = max(s,c);
	    }
	    c = 1;
	}
	    cout<<s;
    return 0;
}
