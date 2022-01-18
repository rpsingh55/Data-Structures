#include<bits/stdc++.h>
#define pb push_back
using namespace std;

    bool possible(int arr[], int n, int mid, int m){
        int stu = 1;
        int s = 0;
        for(int i = 0;i < n;i++){
            s += arr[i];
            if(s > mid){
                stu++;
                s = arr[i];
            }
        }
        return  stu <= m;
    }
    
    int findPages(int arr[], int n, int m) 
    {
       int start = 0;
       int end = 0;
       int mid = 0;
       int jawab = -1;
       for(int i = 0;i < n;i++){
           end += arr[i];
           start = max(start, arr[i]);
       }
       while(start <= end){
           mid = (start + end) / 2;
           if(possible(arr,n,mid,m)){
               jawab = mid;
               end = mid - 1;
           }
           else{
               start = mid + 1;
           }
       }
       return jawab;
    }

int main(){

	int arr[] =  {12,34,67,90};
    cout<<findPages(arr,4,3);
	
   return 0;
}
 
