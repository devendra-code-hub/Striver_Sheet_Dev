#include<bits/stdc++.h>
using namespace std;
int maxele(int a[],int n){
    sort(a,a+n);
    return a[n-1];
}
int main(){
    int a[]={30,11,23,4,20};
    int n=sizeof(a)/sizeof(a[0]);
    int h=6;
    int ans=INT_MAX;
    for(int i=1; i<=maxele(a,n); i++){
        int totalhr=0;
        for(int j=0; j<n; j++){
            totalhr+=ceil( (double)(a[j]) / (double)(i));

        }
        
        if(totalhr<=h){
             ans= min(ans,i);
             totalhr=0;
        }
    }
     if(n==h){
            cout<<maxele(a,n);
        }
        else{
            cout<<ans;
        }

    return 0;
}