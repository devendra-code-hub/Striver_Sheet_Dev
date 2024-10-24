#include<bits/stdc++.h>
using namespace std;
 int peakelement(int a[],int n){

    for(int i=1; i<n-1; i++){
        if((a[i-1]<a[i]) && (a[i]>a[i+1])){
            return i;
        }
    }
    // When there is only one element
    if(n==1){
        return 0;
    }

    if(a[0]>a[1]){
        return 0;
    }
    if(a[n-1]>a[n-2]){
        return n-1;
    }


    return -1;
 }
int main(){
    int a[]={5, 4, 3, 2, 1 };
    int n=sizeof(a)/sizeof(a[0]);
   cout<< peakelement(a,n);
    return 0;
}
/*
Example 1:
Input Format: arr[] = {1,2,3,4,5,6,7,8,5,1}
Result: 7
Explanation: In this example, there is only 1 peak that is at index 7.

Example 2:
Input Format: arr[] = {1,2,1,3,5,6,4}
Result: 1
Explanation: In this example, there are 2 peak numbers that are at indices 1 and 5. We can consider any of them.

Example 3:
Input Format: arr[] = {1, 2, 3, 4, 5}
Result: 4
Explanation: In this example, there is only 1 peak that is at the index 4.

Example 4:
Input Format: arr[] = {5, 4, 3, 2, 1}
Result: 0
Explanation: In this example, there is only 1 peak that is at the index 0.
*/