#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int >a={1,2,3,4,5};
    int k=3;
    int n=a.size();
    int max1=INT_MIN;
    for(int i=0; i<n-k+1; i++){
        max1=max(max1,a[i]+a[i+1]);
    }
    cout<<max1;
}