#include<bits/stdc++.h>
using namespace std;
void rotatearrayleft(int a[],int n, int k){
    int newa[n];
    for(int i=0; i<n; i++){
         if(i<k){
            newa[n-k+i]=a[i];
        }
        else if(i>=k){
            newa[i-k]=a[i];
        }
    }
    cout<<"left-rotate:";
    for(int i=0; i<n;  i++){
        cout<<newa[i]<<" ";
    }
    cout<<endl;
}
void rotatearrayright(int a[],int n, int k){
    int newa[n];
    for(int i=0; i<n; i++){
         if((i+k)<n){
            newa[k+i]=a[i];
        }
        else{
            newa[i-k-1]=a[i];
        }
    }
     cout<<"right-rotate:";
    for(int i=0; i<n;  i++){
        cout<<newa[i]<<" ";
    }
}
int main(){
    int a[]={1,2,3,4,5};
    int k=2;
    int n=sizeof(a)/sizeof(a[0]);
    rotatearrayleft(a,n,k);
    rotatearrayright( a, n, k);
    return 0;
}