#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

	int maxSubstring(string S)
	{
	    int jawab = INT_MIN;
	    int sum = 0;
	    for(auto i : S){
	        int temp;
	        if(i == '0'){
	            temp = 1;
	        }
	        else{
	            temp = -1;
	        }
	        sum += temp;
	        jawab = max(jawab, sum);
	        if(sum < 0) sum = 0;
	    }
	    return jawab;
	}
 


int main(){
    int arr[] = {5,4,8,4,9,46};
    cout<<maxSubstring("01010101010010101100100001010100001");
}
 
