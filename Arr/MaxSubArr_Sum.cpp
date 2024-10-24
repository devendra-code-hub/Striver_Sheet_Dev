#include<bits/stdc++.h>
using namespace std;
void MaxSubArrSum(int a[],int n){
    int maxsum=INT_MIN;
    int a1[n],idx=-1,idx1=-1;
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=i; j<n; j++){
            sum+=a[j];
            if(sum>maxsum){
                maxsum=sum;
               idx1=i;
               idx=j;
            }
        }
    }
    for(int i=idx1; i<=idx; i++){
        cout<<a[i]<<" ";
    }
   cout<<endl;
    
    cout<<maxsum;
}
int main(){
    int a[]={ -2,1,-3,4,-1,2,1,-5,4};
    int n=sizeof(a)/sizeof(a[0]);
    MaxSubArrSum(a,n);
    return 0;
}