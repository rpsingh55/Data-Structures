#include<bits/stdc++.h> 
using namespace std; 

class Solution
{
public:
    vector<int> candyStore(int c[], int n, int k)
    {
        sort(c,c+n);
        int to_buy = (n+k)/(k+1) ;
        vector<int> ans(2) ;
        for(int i=0 ; i<to_buy ; i++){
            ans[0] += c[i] ;
            ans[1] += c[n-i-1] ;
        }
        return ans ;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}  