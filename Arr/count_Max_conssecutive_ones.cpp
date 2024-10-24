#include<bits/stdc++.h>
using namespace std;
int countOnes(int a[], int n){
    int count=0,countmax=0;
    for(int i=0; i<n; i++){
        if(a[i]==1 ){
            if(a[i]==a[i+1])
              count++;
            
            if(count>countmax){
                countmax=count;
                cout<<"countmax:"<<countmax<<endl;
            }
            
          else  if(a[i]==0){
                count=0;
                
            }
        }
    }
    if(countmax==0){
        return 0;
    }
    return countmax+1;
}
int main(){
    int a[]={1,1,0,1,1,1};
    int n=sizeof(a)/sizeof(a[0]);
   cout<< countOnes(a,n);
    return 0;
}