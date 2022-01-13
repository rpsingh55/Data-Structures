#include<bits/stdc++.h>
#define pb push_back
using namespace std;

vector<vector<int> > fourSum(vector<int> &arr, int k) {
        set<vector<int>> s;
        int n = arr.size();
        sort(arr.begin(),arr.end());
        for(int i = 0;i < n;i++){
            for(int j = i+1;j < n;j++){
                int ulta = j+1;
                int seedha = n-1;
                while(ulta < seedha){
                    int sum = arr[i] + arr[j] + arr[ulta] + arr[seedha];
                    if(sum == k){
                        vector<int> v;
                        v.push_back(arr[i]);
                        v.push_back(arr[j]);
                        v.push_back(arr[ulta]);
                        v.push_back(arr[seedha]);
                        s.insert(v);
                        ulta++;
                        seedha--;
                    }
                    else if(sum < k){
                        ulta++;
                    }
                    else{
                        seedha--;
                    }
                }
            }
        }
       vector<vector<int>> jawab (s.begin(),s.end());
        return jawab;
    }

int main(){

   vector<int> arr =  {3,5,5,5,1};
   vector<vector<int>> jawab = fourSum(arr,18);
   for(auto i : jawab){
       for(auto j : i){
           cout<<j<<" ";
       }
   }
   return 0;
}
 
