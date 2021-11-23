#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
using namespace std;

int consecutive(string s){
    int ginti0 = 0,ginti1 = 1,jawab = 0;
    for(auto i: s){
        if(i == '0'){
            ginti0++;
        }
        else{
            ginti1++;
        }
        if(ginti1 == ginti0){
            jawab++;
        }
    }
    if(jawab){
        return jawab;
    }
    else{
        return -1;
    }
}
	     	

int main(){

cout<<consecutive("0100001111011");

}
