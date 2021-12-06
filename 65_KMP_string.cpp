#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

	int lps(string s) {
	    int n = s.length();
	    int st = 0,ed = n - 1,ginti = 0;
	    while(st < n && ed >= 0){
	        if(s.substr(0,ed) != s.substr(st+1,n)){
	            st++;
	            ed--;
	        }
	        else{
	            return ed;
	        }
	    }
	    return 0;
	}

void displayarray(int a[],int n){
for(int i = 0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<"\n";
}
int main(){
    cout<<lps("abcdgabc");
}
