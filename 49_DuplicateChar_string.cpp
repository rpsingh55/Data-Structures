#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
using namespace std;

int main(){
map<char,int> m;
string s = "123211243234";
for(int i = 0;s[i] != '\0';i++){
	m[s[i]]++;
}
for(auto i:m){
	if(i.second > 1){
		cout<<i.first<<" = "<<i.second<<"\n";
	}
}

}
