#include<bits/stdc++.h>
#define pb push_back
using namespace std;

 string smallestWindow (string s, string p)
    {
        int arr[256] = {0}, alag = 0,flag = 1;
        int n = s.length(), m = p.length();
        for(int i = 0; i < m; i++){
            if(arr[p[i]] == 0){
                alag++;
            }
            arr[p[i]]++;
        }
        int i = 0, j = 0, alag2 = 0,i1 = 0,j1 = 0,len = INT_MAX;
        int arr2[256] = {0};
        while(i < n){
            arr2[s[i]]++;
            if(arr2[s[i]] == arr[s[i]]){
                alag2++;
            }
                while(alag2 == alag){
                    flag = 0;
                    if(len > i-j + 1){
                        len = i-j+1;
                        i1 = i;
                        j1 = j;
                    }
                    arr2[s[j]]--;
                    if(arr2[s[j]] < arr[s[j]]){
                        alag2--;
                    }
                    j++;
                }
            i++;
        }
       if(flag){
           return "-1";
       }
        return s.substr(j1,i1-j1+1);
    }

int main(){
   cout<<smallestWindow("rvpamdsams","ram");
}
 
