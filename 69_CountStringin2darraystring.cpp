#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

  int countstring(int i,int j,string s,string arr[],int row,int col,int ind,int siz){
      int found = 0;
      if(i >= 0 && i <= row && j >= 0 && j <= col && s[ind] == arr[i][j]){
          char m = s[ind];
          ind++;
          arr[i][j] = '0';
          if(ind == siz){
              found = 1;
          }
          else{
              found += countstring(i+1,j,s,arr,row,col,ind,siz);
              found += countstring(i-1,j,s,arr,row,col,ind,siz);
              found += countstring(i,j+1,s,arr,row,col,ind,siz);
              found += countstring(i,j-1,s,arr,row,col,ind,siz);
          }
          arr[i][j] = m;
      }
      return found;
  }

void displayarray(int a[],int n){
for(int i = 0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<"\n";
}
int main(){
    string arr[] = { "BBABBM",
					"CBMBBA",
					"IBABBG",
					"GOZBBI",
					"ABCBBC",
					"MCIGAM" };
    string  s = "MAGIC";
    int siz = s.length();
    int ans = 0;
    for(int i = 0; i < 6;i++){
        for(int j = 0;j<6;j++){
            ans += countstring(i,j,s,arr,5,5,0,siz);
        }
    }
    cout<<ans;
}
