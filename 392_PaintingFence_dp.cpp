#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;

    long long countWays(int n, int k){
        if(n == 0) return 0;
        if(n == 1) return k;
        long long mod = 1000000007;
        long long total[n] , same[n] , alag[n];
        alag[0] = k;
        same[0] = k;
        total[0] = same[0] + alag[0];
        alag[1] = (k * (k - 1)) % mod + (k % mod);
        same[1] = k;
        total[1] = (same[1] + alag[1]) % mod;
        for(int i = 2;i < n;i++){
            alag[i] = (total[i-1]) % mod * (k-1) % mod;
            same[i] = alag[i-1] % mod;
            total[i] = (same[i] + alag[i]) % mod;
        }
        return alag[n-1];
    }


int main(){
    cout<<countWays(4,6);
}
 
