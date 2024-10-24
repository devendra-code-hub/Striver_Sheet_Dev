#include<bits/stdc++.h>
using namespace std;
void unionofarr(int a1[],int a2[], int n, int m){
    int a[n+m];
    for(int i=0; i<n; i++){
              a[i]=a1[i];
        }
    for(int i=0; i<m; i++){
              a[i+n]=a2[i];
        }
        sort(a,a+n+m);
        for(int i=0; i<n+m; i++){
            if(a[i]!=a[i+1])
            cout<<a[i]<<" ";
        }


    }
     

int main(){
   int a1[]={1,2,3,3,3,4,5};
   int a2[]={2,3,4,6,7};
   int n=sizeof(a1)/sizeof(a1[0]);
   int m=sizeof(a2)/sizeof(a1[0]);
   unionofarr(a1,a2,n,m);
    return 0;
}