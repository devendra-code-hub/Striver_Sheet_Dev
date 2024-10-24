#include<bits/stdc++.h>
using namespace std;
void sort_0_1_2(int a[],int n){
    int count0=0,count1=0,count2=0;
    for(int i=0; i<n; i++){
        if(a[i]==0){
            count0++;
        }
        else if(a[i]==1){
            count1++;
        }
        else{
            count2++;
        }
    }
    int i;
    for(  i=0;i<count0; i++){
        a[i]=0;
    }
    for(  i=count0;i<(count1+count0); i++){
        a[i]=1;
    }
    for(  i=count1+ count0;i<(count0+count1+count2); i++){
        a[i]=2;
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[]={2,0,2,1,1,0};
    int n=sizeof(a)/sizeof(a[0]);
    sort_0_1_2(a,n);
    
    return 0;
}