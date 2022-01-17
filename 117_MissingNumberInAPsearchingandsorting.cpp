#include<bits/stdc++.h>
#define pb push_back
using namespace std;

    int inSequence(int a, int b, int c){
        if(c == 0){
            return a == b;
        }
        if(((b-a) / c) < 0){
            return false;
        }
        if(((b-a) % c) == 0){
            return true;
        }
        return false;
    }

int main(){

	int arr1[] =  {3,5,15,5,15,9};
	int arr2[] =  {3,5,15,5,15,9};
    cout<<inSequence(23,3535,3);
	
   return 0;
}
 
