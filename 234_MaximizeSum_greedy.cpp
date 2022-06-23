#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int Maximize(int a[],int n)
    {
        int jawab = 0;
        sort(a,a+n);
       long long int sum=0;
       int mod=1000000007;
       for(long long int  i=0;i<n;i++)
       {
           sum =(sum + ((a[i]*i)%mod))%mod;
          
       }
       return sum;
    }
};

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}  