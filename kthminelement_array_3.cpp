#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
  int kthSmallest(int arr[], int l, int r, int k)
{
     priority_queue<int>p;
       for(int i=l;i<k;i++)
           p.push(arr[i]);
       for(int i=k;i<=r;i++) 
       {
           if(arr[i]<p.top()){
               p.pop();
               p.push(arr[i]);
           } 
       }
       return p.top();
}
int main()
{
int a[4] = {0,1,2,3};
  // mergesort(a,4);
  cout<<kthSmallest(a,0,4,3);
}