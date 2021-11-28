#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

   int editDistance(string s, string t) {
        int m = s.length();
        int n = t.length();
        int arr[m+1][n+1];
        for(int i = 0;i <= m;i++){
            for(int j = 0;j <= n;j++){
                if(i == 0){
                    arr[i][j] = j;
                }
                else if(j == 0){
                    arr[i][j] = i;
                }
                else if(s[i-1] == t[j-1]){
                    arr[i][j] = arr[i-1][j-1];
                }
                else{
                    int k = min(arr[i-1][j],arr[i][j-1]);
                    k = min(k,arr[i-1][j-1]);
                    arr[i][j] = k + 1;
                }
            }
        }
        return arr[m][n];
    }

void displayvector(vector<int> v){
for(auto i:v){
    cout<<i<<" ";
}
cout<<"\n";
}
void displayarray(int a[],int n){
for(int i = 0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<"\n";
}
int main(){
cout<<editDistance("geek","gesek");
}
