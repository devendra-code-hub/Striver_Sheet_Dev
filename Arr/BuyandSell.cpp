#include<bits/stdc++.h>
using namespace std;
int buyandsell(int a[],int n){
    int minidx=-1,maxidx=-1,minprices=INT_MAX,maxprices=INT_MIN,ans=0;
    
        for(int j=0; j<n; j++){
              
            if(a[j]<minprices){
                minprices=a[j];
                minidx=j;
            }
            
        }
        for(int j=minidx+1; j<n; j++){
            if(a[j]> maxprices){
                 
                maxprices=a[j];
                maxidx=j;
            }
        }
        cout<<minidx<<" "<<maxidx<<endl;
    if( (maxprices<minprices)){
        ans=0;
    }
    else{
        ans=maxprices-minprices;
    }
        for(int i=0; i<n; i++){
            if(minidx==n-1){
                if(a[i+1]>a[i]){
                    ans=a[i+1]-a[i];
                }
                else{
                    ans=0;
                }
            }
        }
    //}
    return ans;
}
int main(){
    int a[]={ 2,4,1};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<buyandsell(a,n);
    return 0;
}