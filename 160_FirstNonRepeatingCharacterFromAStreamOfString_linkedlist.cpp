#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

		string FirstNonRepeating(string A){
            string s = "";
            queue<char> q;
            vector<int> v(26, 0);
            for (auto i : A) {
                q.push(i);
                v[i - 'a']++;
                while (!q.empty() and v[q.front() - 'a']>1)
                q.pop();
                s += q.empty()?'#':q.front();
            }
    return s;
		}


void displayarray(int a[],int n){
for(int i = 0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<"\n";
}
int main(){
    cout<<FirstNonRepeating("frkldflkreoewkjr");
}
