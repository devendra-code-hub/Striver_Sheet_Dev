#include<bits/stdc++.h>
using namespace std;
vector<string>v1; 
vector<string> findValidStr(int k){
    if(k==0) return v1;
    if(k==1){
        v1.push_back("0");
        v1.push_back("1");
        return v1;

    }
   v1=findValidStr(k-1);
   int size=v1.size();
   for(int i=0; i<size; i++){
    if(v1[i][0]=='0'){
        v1[i]="1"+v1[i];
    }
    v1[i]="0"+v1[i];

   }
   return v1;
}
int main(){
    int k=3;
    vector<string>v;
     v=findValidStr(k);
     for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
     }
    return 0;
}