#include<bits/stdc++.h>
using namespace std;
//void next_permutation(int a[],int n)//{

   // for(int i=0; i<n-2; i++){
       // if(a[1]==max1){
            // sort(a,a+n);
            // a[0]=(a[0]+1);
            // a[1]=min;
            // a[2]=(a[2]+1);

      //  }
      //  else{
//         swap(a[i+1],a[i+2]);
//         }
//     }
// }
int main(){
    int a[]={1,1,5};
    int n=sizeof(a)/sizeof(a[0]);
   // next_permutation(a,n);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}