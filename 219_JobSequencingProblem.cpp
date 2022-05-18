#include<bits/stdc++.h>
using namespace std; 

struct Job 
{ 
    int id;	 
    int dead;  
    int profit; 
}; 


class Solution 
{
    public:
    vector<int> JobScheduling(Job arr[], int n) 
    { 
           vector<pair<int,int>>v;
       vector<int>v2;
       for(int i=0;i<n;i++)
       {
         v.push_back(make_pair(arr[i].profit,arr[i].dead));
         
       }
       int counting=0;
       int profit=0;
       int k=v.size();
       sort(v.begin(),v.end());
       reverse(v.begin(),v.end());
       int array[v.size()]={0};
       for (int i=0;i<v.size();i++)
       {
           for(int j=min(k,v[i].second-1);j>=0;j--)
           {
               if(array[j]==false)
               {
                   counting++;
                   profit=profit+v[i].first;
                   array[j]=true;
                   break;
                   
               }
           }
       }
       v2.push_back(counting);
       v2.push_back(profit);
       return v2;
       
    } 
};

int main() 
{ 
    int t;
    cin >> t;
    
    while(t--){
        int n;
        
        cin >> n;
        Job arr[n];
        
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}

