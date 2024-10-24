#include<bits/stdc++.h>
using namespace std;
// Time complexity is --- O(2*N)
int ndlargest(int a[], int n){
    if(n<2){
        return -1;
    }
    int max1=INT_MIN,count=0;
    for(int i=0; i<n; i++){
        if(a[i]!=a[i+1]){
            count++;
        }
         
        if(max1<a[i]){
            max1=a[i];
        }
    }
    
    int max2=INT_MIN;
     for(int i=0; i<n; i++){
        
        if(max2<a[i] && a[i]!=max1){
            max2=a[i];
        }
    }
    if(count<1){
        return -1;
    }
   
return max2;
}
int main(){
     
    int a[]={0,0,0};
    int n=sizeof(a)/sizeof(a[0]);
     
   cout<< ndlargest(a,n);

    return 0;
}