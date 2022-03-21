#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
#define pb push_back
using namespace std;
    
        string longestPalindrome(string s) {
        int i,n = s.length(),low=0,range=1,high=1, l ,  r;
        for(i=0;i<n;i++){
             l = i;
             r = i + 1;
            while(l >= 0 && r < n && s[l] == s[r]){
                l--;
                r++;
            }
            l++;
            r--;
            if(r-l+1 > range){
                range = r - l + 1;
                low = l;
                high = r;
            }
            r = i + 1;
            l = i - 1;
            while(l >= 0 && r < n && s[l] == s[r]){
                l--;
                r++;
            }
            l++;
            r--;
            if(r-l+1 > range){
                range = r - l + 1;
                low = l;
                high = r;
            }
        }
        return s.substr(low,range);
    }

int main(){
    int arr[] = {5,4,8,4,9,46};
    cout<<longestPalindrome("jsdfkdfjdffgs");
}
 
