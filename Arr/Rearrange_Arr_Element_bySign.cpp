#include<bits/stdc++.h>
using namespace std;
void rearrangeArr(int a[], int n){
    
    int countneg=0,countpos=0;
    for(int i=0; i<n; i++){
        if(a[i]<0){
            countneg++;
        }
        else{
            countpos++;
        }
    }
    
    int a1[countneg],a2[countpos];
    int  i=0,j=0;
    for(int k=0;k<n; k++){
        if(a[k]<0){
           a1[i++]=a[k];
        }
        else{
            a2[j++]=a[k];
        }
    }
    
    int l=0,m=0,n1=0;
    while(l<n){
    if((l%2)!=0){
        a[l++]=a1[m++];
    }
    else{
        a[l++]=a2[n1++];
    }

    }
     
    
    for(int i=0; i<n; i++){ 
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[]={ 1,2,-4,-5,3,4};
    int n=sizeof(a)/sizeof(a[0]);
    rearrangeArr(a,n);
    return 0;
}