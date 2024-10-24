#include<bits/stdc++.h>
using namespace std;
 vector<int> findleader(int a[], int n){
    vector<int>a1;
    int max=a[n-1];
    a1.push_back(a[n-1]);
    for(int i=n-1; i>0; i--){
        if(a[i-1]>=max){
             a1.push_back(a[i-1]);
            max=a[i-1];
        }

    }
    reverse(a1.begin(),a1.end());
    return a1;

}
// // void findleader(int a[], int n){
//     int count=0;
//     for(int i=0; i<n; i++){
//         for(int j=i; j<n-1; j++){
//             if(a[i]>=a[j+1]){
//                 count++;
//                 if(count==(n-i-1)){
//                     cout<<a[i]<<" ";
//                     // count=0;
//                 }
//             }
//             else{
//                 count=0;
//             }
            
//         }
//          count=0;
//     }
//     cout<<a[n-1]<<endl;
    

 
int main(){
    int a[]={10,4,2,4,1};
    int n=sizeof(a)/sizeof(a[0]);
    findleader(a,n);
    return 0;
}
//10,4,2,4,1
//16,17,4,3,5,2
// 5, 10, 20, 40
// 30, 10, 10, 5