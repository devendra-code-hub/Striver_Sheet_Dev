#include<bits/stdc++.h>
using namespace std;
int  findSingleEle(vector<int> & a,int n){
    int ans,count=0;
    for(int i=1; i<n-1; i++){
        if((a[i-1]!=a[i])&&(a[i]!=a[i+1])){
            ans=a[i];
            
            
        }
    }
    return ans;
}
int main(){
    vector<int>a={1,1,2,3,3,4,4,8,8}; 
    int n=a.size();
    cout<<findSingleEle(a,n);
    
    return 0;
}
/*
1,1,2,3,3,4,4,8,8
1,1,3,5,5
*/