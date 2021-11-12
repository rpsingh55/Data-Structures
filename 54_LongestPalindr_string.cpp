#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
using namespace std;

  string longestPalin (string a) {
      
        int n = a.length();
        int low = 0, high = 1, maxl = 1, i,j,k;
        for(i=1;i<n;i++){
            j = i-1;
            k = i;
            while(j >= 0 && k < n && a[j] == a[k]){
                j--;k++;
            }
            j++;
            k--;
           int len = k - j + 1;
            if(len > maxl && a[j] == a[k]){
                maxl = len;
                low = j;
                high = k;
            }
            
             j = i-1;
            k = i+1;
            while(j >= 0 && k < n && a[j] == a[k]){
                j--;k++;
            }
            j++;
            k--;
           len = k - j + 1;
            if(len > maxl && a[j] == a[k]){
                maxl = len;
                low = j;
                high = k;
            }
        }
        
   
        return a.substr(low,maxl);
    }


int main(){

cout<<longestPalin("forgeeksskeegfor");

}
