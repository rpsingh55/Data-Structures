#include<bits/stdc++.h>
#define pb push_back
using namespace std;

    long long  findSubarray(vector<long long> arr, int n ) {
        long long jawab = 0;
        long long sum = 0;
        map<int,int> m;
        m[0] = 1;
        for(auto i : arr){
            sum += i;
            if(m[sum] == 0){
                m[sum] = 1;
            }
            else{
                jawab += m[sum];
                m[sum]++;
            }
        }
        return jawab;
    }

int main(){

   vector<long long > arr =  {3,5,-15,-5,15,9};
   cout<<findSubarray(arr,5);
   return 0;
}
 
