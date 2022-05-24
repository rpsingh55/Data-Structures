#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
  static bool cmp(pair<int,char> &p1 , pair<int,char> &p2)
   {
       if(p1.first == p2.first)
       {
           return p1.second < p2.second;
       }
       
       return p1.first < p2.first;
   }
   int findPlatform(int arr[], int dep[], int n)
   {
       vector<pair<int,char>> vp;
       
       for(int i=0;i<n;i++)
       {
           vp.push_back({arr[i] , 'a'});
           vp.push_back({dep[i] , 'd'});
       }
       
       sort(vp.begin() , vp.end() , cmp);
       
       int ct = 0 , mxans = 1;
       
       for(auto x : vp)
       {
           if(x.second == 'a')
           {
               ct++;
           }
           else 
           {
               ct--;
           }
           mxans = max(mxans , ct);
       }
       
       return mxans;
   }
};


int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  