#include<bits/stdc++.h>
#define pb push_back
using namespace std;

 vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       vector<long long int> jawab;
       long long int uttar = 1;
       int flag = 0;
       for(auto i : nums){
           if(i != 0){
            uttar *= i;
           }
           else{
               flag++;
           }
       }
        if(flag > 1){
               uttar = 0;
           }
       for(auto i : nums){
           if(i == 0){
               jawab.push_back(uttar);
           }
           else if(flag){
               jawab.push_back(0);
           }
           else{
           jawab.push_back(uttar/i);
           }
       }
       return jawab;
    }

int main(){

   vector<long long int> arr =  {3,5,-15,-5,15,9};
   vector<long long int> v = productExceptSelf(arr,5);
   for(auto i : v){
       cout<<i<<" ";
   }
   return 0;
}
 
