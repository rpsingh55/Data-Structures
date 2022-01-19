#include<bits/stdc++.h>
#define pb push_back
using namespace std;

      bool check(int mid , int n){
        int ginti = 0, chk = 5, temp = mid;
        while(chk <= temp){
            ginti += temp / chk;
            chk *= 5;
        }
        return ginti >= n;
    }
    
        int findNum(int n)
        {
            if(n == 1) return 5;
            int low = 0;
            int high = 5 * n;
            while(low < high){
                int mid = (high + low) / 2;
                if(check(mid,n)){
                    high = mid;
                }
                else{
                    low = mid + 1;
                }
            }
            return low;
        }

int main(){

	int arr1[] =  {3,5,15,5,15,9};
	int arr2[] =  {3,5,15,5,15,9};
    cout<<findNum(6);
	
   return 0;
}
 
