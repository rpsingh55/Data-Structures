#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
   int a[5] = {1,2,3,4,5};
   int i,n = 5;
   for(i=0;i<n;i++){
   int temp = a[i];
   a[i] = a[n-1];
   a[n-1] = temp;
   n--;
   }
   for(i=0;i<5;i++){
       cout<<a[i];
   }
  
 
   return 0; 
}