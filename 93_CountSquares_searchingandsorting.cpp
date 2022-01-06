#include<bits/stdc++.h>
#define pb push_back
using namespace std;

  int countSquares(int N) {
        for(int i = 1;i <= N;i++){
            if(i*i >= N){
                return i-1;
            } 
        }
        return -1;
    }

int main(){

    cout<<countSquares(5);
   
   return 0;
}
 
