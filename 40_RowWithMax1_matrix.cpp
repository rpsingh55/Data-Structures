#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
using namespace std;

int main(){

  vector<vector<int>> a = {{0, 1, 1, 1},
           {0, 0, 1, 1},
           {1, 1, 1, 1},
           {0, 0, 0, 0}};
           int n = 4 , m = 4;
        int i,j,l=0,k=0,ind=-1;
	   int s = 0,e= m-1;
	   while(s < n && e>=0){
	       if(a[s][e] == 1){
	           ind = s;
	           e--;
	       }
	       else{
	           s++;
	       }
	   }
	    cout<<ind;
    return 0;
}
