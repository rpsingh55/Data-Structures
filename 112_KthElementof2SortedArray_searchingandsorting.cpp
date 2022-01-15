#include<bits/stdc++.h>
#define pb push_back
using namespace std;

    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int j = 0;
        for(int i = n-1;i >= 0&& j < m;i--){
            if(arr1[i] > arr2[j]){
                swap(arr1[i] , arr2[j]);
                j++;
            }
            else{
                break;
            }
        }
        if(k <= n){
         sort(arr1,arr1+n);
         return arr1[k-1];
        }
        else{
            sort(arr2,arr2+m);
            return arr2[k-n-1];
        }
    }

int main(){

	int arr1[] =  {3,5,15,5,15,9};
	int arr2[] =  {3,5,15,5,15,9};
    cout<<kthElement(arr1,arr2,6,6,8);
	
   return 0;
}
 
