#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

     bool ispar(string x)
    {
      stack<char> s;
      for(auto i : x){
          if(i == '{' || i == '(' || i == '['){
              s.push(i);
          }
          else{
              if(s.size() == 0){
                  return false;
              } 
              if(i == '}' && s.top() == '{'){
                  s.pop();
              }
              else if(i == ')' && s.top() == '('){
                  s.pop();
              }
              else if(i == ']' && s.top() == '['){
                  s.pop();
              }
              else{
                  return false;
              }
          }
      }
      if(s.size() == 0){
          return true;
      }
        return false;
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

cout<<ispar("[][][][][]");

}
