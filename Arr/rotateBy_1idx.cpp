#include<bits/stdc++.h>
using namespace std;
void rotatearray(int a[], int n){
    int newa[n];
    for(int i=0; i<n; i++){
         
        if(i==4){
            newa[i]=a[0];
        }
        else{
            newa[i]=a[i+1];
        }
    }
    for(int i=0; i<n;i++){
        cout<<newa[i]<<" ";
    }
}
int main(){
    int a[]={3,4,1,5,2};
    int n=sizeof(a)/sizeof(a[0]);
    rotatearray(a,n);
    return 0;
}