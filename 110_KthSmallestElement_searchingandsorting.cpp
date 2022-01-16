#include<bits/stdc++.h>
#define pb push_back
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

int main(){

	int arr1[] =  {3,5,15,5,15,9};
	int arr2[] =  {3,5,15,5,15,9};
    cout<<kthSmallest(arr1,0,5,3);
	
   return 0;
}
 
