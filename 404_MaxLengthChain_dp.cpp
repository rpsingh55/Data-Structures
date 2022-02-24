#include <bits/stdc++.h>
using namespace std;

struct val{
	int first;
	int second;
};



int maxChainLen(struct val p[],int n);
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		val p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i].first>>p[i].second;
		}
		
		cout<<maxChainLen(p,n)<<endl;
	}
	return 0;
}

bool comparator(val i1, val i2)
{
    return (i1.first < i2.first);
}

int maxChainLen(struct val p[],int n)
{
    sort(p,p+n,comparator);
    int dp[n+1] = {0};
    dp[0] = 1;
    for(int i = 1;i < n;i++){
        dp[i] = 1;
        for(int j = 0;j < i;j++){
            if(p[i].first > p[j].second){
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    int jawab = 0;
    for(int i = 0;i < n;i++){
        jawab = max(jawab, dp[i]);
    }
    return jawab;
}