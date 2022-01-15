#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin >> n;
vector<int> v(n);
for(int i = 0;i < n;i++){
	cin>>v[i];
}
sort(v.begin(),v.begin()+n);
int t;
cin>>t;
while(t--){
	int shakti;
	cin>>shakti;
	int jawab1 = 0;
	int jawab2 = 0;
	for(auto i : v){
		if(i <= shakti){
			jawab1++;
			jawab2 += i;
		}
		else{
			break;
		}
	}
	cout<<jawab1<<" "<<jawab2<<"\n";
	}
	return 0;
}
