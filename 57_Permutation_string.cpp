#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
using namespace std;

    void per(string s,int i,vector<string>& v){
	     	    
		    if(i == s.length()-1){
		        v.push_back(s);
		        return;
		    }
		    for(int j = i;j<s.length();j++){
		        swap(s[i],s[j]);
		        per(s,i+1,v);
		        swap(s[i],s[j]);
		    }
		}
	vector<string>find_permutation(string S)
		{
		   	vector<string> v;
		   	per(S,0,v);
		   	sort(v.begin(),v.end());
		  return v;
		  
		}
	     	

int main(){

vector<string> v = find_permutation("ABC");
for(auto i : v){
    cout<<i<<" ";
}
}
