#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,ans=1;
   cin>>n;
   for(int i=1; i<=n; i++){
    if((i*i)<=n){
        ans=i;
    }
    else if((i*i)>=n){
                break;
            }
    
   }

    cout<<ans<<" "<<sqrt(n);
    return 0;
}
