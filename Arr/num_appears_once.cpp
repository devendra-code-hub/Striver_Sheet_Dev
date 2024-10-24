#include<bits/stdc++.h>
using namespace std;
int num_appears(int a[],int n){
    // pre compute
    unordered_map<int,int>freq;
    for(int i=0; i<n; i++){
        freq[a[i]]++;
    }
    for(auto it:freq){
        if(it.second==1){
            return it.first;
        }
    }
}
int main(){
    int a[]={1,3,2,3,1,4};
    int n=sizeof(a)/sizeof(a[0]);
   cout<< num_appears(a,n);
    return 0;
}