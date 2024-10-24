#include<bits/stdc++.h>
using namespace std;
 bool checksorted(int a[], int n){
    int newa[n];
    copy(a, a + n, newa);
    sort(newa,newa+n);
    for(int i=0; i<n; i++){
        if(a[i+1]>=a[i]){

        }
        else if(a[i]>a[i+1]){
            reverse(a,a+i+1);
            reverse(a+i+1,a+n);
            reverse(a,a+n);
            for(int i=0; i<n; i++){
                if(a[i]!=newa[i]){ 
                    return false;
                }
            }
        }
        
    }
    return true;
 }
int main(){
    int a[]={3,4,5,-1,2};
    int n=sizeof(a)/sizeof(a[0]);
     cout<<checksorted(a,n);
    return 0;
}