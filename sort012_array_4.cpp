#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
void sort012(int a[], int n)
{
    int count0 =0,count1=0,count2=0,i;
    for( i=0;i<n;i++){
        if(a[i] == 0){
            count0++;
        }
        else if(a[i] == 1){
            count1++;
        }
        else{
            count2++;
        }
    }
    for(i=0;i<count0;i++){
        a[i] = 0;
    }
    for(int j=0;j<count1;j++){
        a[i] = 1;
        i++;
    }
    for(int k=0;k<count2;k++){
        a[i] = 2;
        i++;
    }
    
}
int main()
{
int a[4] = {0,1,2,0};
  // mergesort(a,4);
  sort012(a,4);
  cout<<a[1];
}