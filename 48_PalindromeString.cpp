#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
using namespace std;

int main(){

string S = "12321";
    int flag = 1,s = S.size();
	for(int i =0;i<s;i++){
	    if(S[i] != S[s-1]){
	        flag = 0;
	    }
	    s--;
	}
    cout<<flag;

}
