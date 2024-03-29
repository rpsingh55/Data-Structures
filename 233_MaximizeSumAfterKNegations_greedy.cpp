#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long int maximizeSum(long long int a[], int n, int k)
    {
       long long int jawab = 0;
       sort(a, a + n);
       for(int i = 0;i < n;i++){
           if(k > 0 && a[i] < 0){
               a[i] *= -1;
               k--;
           }
           jawab += a[i];
       }
       if(k % 2 == 1){
           long long int mn =* min_element(a, a + n);
           jawab -= 2*mn;
       }
       return jawab;
    }
};

int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n, k;
         cin>>n>>k;
         long long int a[n+5];
         for(int i=0;i<n;i++)
         cin>>a[i];
         Solution ob;
         cout<<ob.maximizeSum(a, n, k)<<endl;
     }
	
	return 0;
}  