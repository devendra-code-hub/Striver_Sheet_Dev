#include<bits/stdc++.h>
using namespace std;
int countElement(int a[],int n){
    int ans=0;
    unordered_map<int,int>freq;
    for(int i=0; i<n; i++){
        freq[a[i]]++;
    }
    for(auto it:freq){
        if(it.second>(n/2)){
            ans=it.first;
        }
    }
    return ans;
}
int main(){
    int a[]={4,4,2,4,3,4,4,3,2,4};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<countElement(a,n);
    return 0;
}