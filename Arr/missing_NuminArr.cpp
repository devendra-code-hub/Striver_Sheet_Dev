#include<bits/stdc++.h>
using namespace std;
int findmissing(int a1[],int n){
    for(int i=0; i<n; i++){
        if(a1[i]!=i+1){
            return i+1;
        }
    }
}
int main(){
    int a1[]={2,3,4,5};
    int n=5;//sizeof(a1)/sizeof(a1[0]);
    cout<<findmissing(a1,n);
    return 0;
}