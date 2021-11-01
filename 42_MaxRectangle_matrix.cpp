#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
using namespace std;

 int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> left(n),right(n);
        
        stack<int> mystack;
        for(int i=0;i<n;++i)    
        {
            if(mystack.empty())
            {    left[i] = 0;   mystack.push(i);    }
            else
            {
                while(!mystack.empty() and heights[mystack.top()]>=heights[i])
                    mystack.pop();
                left[i] = mystack.empty()?0:mystack.top()+1;
                mystack.push(i);
            }
        }
        while(!mystack.empty()) 
            mystack.pop();
        
        for(int i=n-1;i>=0;--i) 
        {
            if(mystack.empty())
            {   right[i] = n-1; mystack.push(i);    }
            else
            {
                while(!mystack.empty() and heights[mystack.top()]>=heights[i])
                    mystack.pop();
                right[i] = mystack.empty()?n-1:mystack.top()-1;
                mystack.push(i);
            }
        }
        int mx_area = 0;    
        for(int i=0;i<n;++i)
            mx_area = max(mx_area,heights[i]*(right[i]-left[i]+1));
        return mx_area;
    }


int main(){
  int a[4][4] = {{0,1,1,0},
         {1,1,1,1},
         {1,1,1,1},
         {1,1,0,0}};
         int n = 4 ,m =4;
  int maxi = INT_MIN,i,j;
       
       for(i=1;i<n;i++){
           for(j=0;j<m;j++){
               if(a[i][j] == 1){
                   a[i][j] += a[i-1][j];
               }
           }
       }
       for(i=0;i<n;i++){
           vector<int> v;
               for(j=0;j<m;j++){
                   v.push_back(a[i][j]);
               }
               maxi = max(maxi,largestRectangleArea(v));
       }
       cout<<maxi;
       return 0;

}
