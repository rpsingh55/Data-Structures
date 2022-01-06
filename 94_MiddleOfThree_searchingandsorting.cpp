#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int middle(int A, int B, int C){
       if(A > B){
           return (B>C) ? B : min(A,C);
       }
       return A > C ? A : min(B,C);
    }

int main(){

    cout<<middle(456,465,765);
   
   return 0;
}
 
