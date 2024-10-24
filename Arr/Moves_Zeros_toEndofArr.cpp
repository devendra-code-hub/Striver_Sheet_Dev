#include<bits/stdc++.h>
using namespace std;
void movesZeros(int a[], int n){
    int count=0;
    for(int i=0; i<n; i++){
        if(a[i]==0){
            count++;
        }
    }
    for(int j=0; j<count;j++){
    for(int i=0; i<n-1; i++){
        if(a[i]==0 && a[i+1]!=0){
            swap(a[i],a[i+1]);
        }
    }
}
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}
int main(){
     int a[]={1,8,0,0,2,4,9};
    int n=sizeof(a)/sizeof(a[0]);
    movesZeros(a,n);

    return 0;
}