#include<bits/stdc++.h>
using namespace std;
int longestsubarr(int a[],int n, int k){
    int maxlength=0;
    for(int i=0; i<n; i++){
        int sum=0;
        if( maxlength == n- i )
          break;

        for(int j=i; j<n; j++){
            sum+=a[j];
            if(sum==k){
                maxlength=(maxlength,j-i+1);
            }
        }
    }

 return maxlength;
}
int main(){
    int a[]={1,2,-1,0,9,0,2};
    int n=sizeof(a)/sizeof(a[0]); 
    int k=12;
   cout<< longestsubarr(a,n,k);
      return 0;
}