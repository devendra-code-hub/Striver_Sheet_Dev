#include<bits/stdc++.h>
using namespace std;
 void removeduplicate(int a[],int n){
    int count=0;
    for(int i=0; i<n; i++){
        if(a[i]!=a[i+1]){
            count++;
            cout<<a[i]<<" ";
        }
    }
    cout<<","<<count;
 }
int main(){
    int a[]={1,2,2,3,3,3};
    int n=sizeof(a)/sizeof(a[0]);
    
    removeduplicate(a,n);
    return 0;
}