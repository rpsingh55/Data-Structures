#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

int minFlips (string s)
{
    int n = s.length();
    int c0 = 0, c1 = 0,jawab = 0;
    for(int i = 0;i < n;i++){
      if((i % 2 == 0 && s[i] == '1') || (i % 2 != 0 && s[i] == '0')){
          c1++;
      }
       if((i % 2 == 0 && s[i] == '0') || (i % 2 != 0 && s[i] == '1')){
          c0++;
      }
    }
   jawab = n - max(c1,c0);
    return jawab;
}

void displayarray(int a[],int n){
for(int i = 0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<"\n";
}
int main(){
    cout<<minFlips("10100010101");
}
 
