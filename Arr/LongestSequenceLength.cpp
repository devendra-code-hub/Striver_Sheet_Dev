#include<bits/stdc++.h>
using namespace std;
 int maxlength(int a[], int n){
    int mxlen=INT_MIN,count=1;
    sort(a,a+n);
    for(int i=0; i<n-1; i++){
        if(abs(a[i+1]-a[i])==1){
            count++;
            mxlen=max(count,mxlen);
        }
        else if(a[i+1]==a[i]){
            count=count;
        }
        else{
            // mxlen=max(count,mxlen);
            count=1;
        }
    }
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else if(count>mxlen){
        return count;
    }
    else{
        return mxlen;

    }

    //return mxlen;
 }
int main(){
    int a[]={1,2,0,1};
    int n=sizeof(a)/sizeof(a[0]);
   cout<<maxlength(a,n);
    return 0;
}
//100,200,1,3,2,4
//3, 8, 5, 7, 6
//0,3,7,2,5,8,4,6,0,1
// []
//[0]
//[0,0]
//[1,2,0,1]