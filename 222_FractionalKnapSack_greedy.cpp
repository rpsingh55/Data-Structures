#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};



class Solution
{
    public:
    double fractionalKnapsack(int W, Item arr[], int n) {
       vector<pair<double,pair<int,int>>> vec;
       for(int i=0;i<n;i++) {
           vec.push_back({arr[i].value/(arr[i].weight*1.0),{arr[i].value,arr[i].weight}});
       }
       sort(vec.begin(),vec.end(),greater<pair<double,pair<int,int>>> ());
       double cost=0.0;
       for(int i=0;i<n;i++) {
           if(vec[i].second.second<=W) {
               W-=vec[i].second.second;
               cost+=vec[i].second.first;
           } else {
               if(W>0) {
                   cost+=W*vec[i].first;
                   break;
               }
           }
       } return cost;
   }
};


int main()
{
	int t;
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  