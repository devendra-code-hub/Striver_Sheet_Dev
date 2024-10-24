#include<bits/stdc++.h>
using namespace std;
int linearsearch(int a[], int n,int k){
    for(int i=0; i<n; i++){
        if(a[i]==k){
            return i;
        }
    }
    return -1;
}
int main(){
    int a[]={1,2,3};
    int k=3;
    int n=sizeof(a)/sizeof(a[0]);
   cout<< linearsearch(a,n,k);
    return 0;
}