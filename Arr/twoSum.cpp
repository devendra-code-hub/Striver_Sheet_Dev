#include<bits/stdc++.h>
using namespace std;
void findsumtwo(int a[],int n, int t){
    int ans=0,idx1=-1,idx2=-1;
    for(int i=0; i<n; i++){
        for(int j=0;j<n; j++){
            if(a[i]!=a[j]){
                if(a[i]+a[j]==t){
                    ans=1;
                    idx1=i;
                    idx2=j;
                }
            }
        }
    }
    if(ans==1){
        cout<<"YES"<<" "<<idx2<<","<<idx1;
    }
    else{
        cout<<"NO"<<" "<<idx1<<","<<idx2;
    }
}
int main(){
    int a[]={2,6,5,8,11};
    int n=sizeof(a)/sizeof(a[0]);
    int t=14;
    findsumtwo(a,n,t);
    return 0;
}