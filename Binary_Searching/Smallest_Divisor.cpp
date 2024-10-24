#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={44,22,33,11,1};
    int n=sizeof(a)/sizeof(a[0]);
    int limit=5;
    unordered_map<int,int>freq;
    for(int i=0; i<n; i++){
        freq[a[i]];
    }
    int maxEle=0;
    for(auto it:freq){
        if(it.first>maxEle){
            maxEle=it.first;

        }
    }
   // cout<<maxEle;
    int idx=INT_MAX;
    
    for(int i=1; i<=maxEle; i++){
        int sum=0;
        for(int j=0; j<n; j++){
             if((a[j]%i==0)){
                sum+=a[j]/i;
             }
             else{
                sum+=(a[j]/i) +1;
             }
        }
        if(sum<=limit){
                  cout<<i;
                  break;
            }
    }

     
    return 0;
}