#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<set>
using namespace std;

void rotation(string s1, string s2){
    if(s1.size() != s2.size()){
        cout<<s2<<"  is not rotation of "<<s1<<"\n";
        return;
    }
    string s3 = s1 + s1;
    int k = 0,c=0;
    for(int i = 0; s3[i] != '\0';i++){
        if(c == s1.size()){
            cout<<s2<<"  is rotation of "<<s1<<"\n";
            return;
        }
        if(s3[i] == s2[k]){
            k++;
            c += 1;
        }
        else{
            k = 0;
            c = 0;
        }
    }
     if(c == s1.size()){
            cout<<s2<<"  is rotation of "<<s1<<"\n";
            return;
        }
        else{
            cout<<s2<<"  is not  rotation of "<<s1<<"\n";
        }


}

int main(){

rotation("ABCD","DCAB");

}
