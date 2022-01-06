#include<bits/stdc++.h>
#define pb push_back
using namespace std;

    int bsearch(vector<int>& a, int target,int start,int end){
        if(end >= start){
            int mid = (end+start)/2;
            if(a[mid] == target){
                return mid;
            }
            else if(a[mid] >= a[start]){
                if(target < a[mid] && target >= a[start]){
                    return bsearch(a,target,start,mid-1);
                }
                else{
                    return bsearch(a,target,mid+1,end);
                }
            }
            else{
                if(target > a[mid] && target <= a[end]){
                    return bsearch(a,target,mid+1,end);
                }
                else{
                    return bsearch(a,target,start,mid-1);
                }
            }
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        
        return bsearch(nums,target,0,nums.size()-1);
    }

int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9,0};
    cout<<search(v,5);
   
   return 0;
}
 
