#include<bits/stdc++.h>
using namespace std;
int MaxProduct(vector<int>&nums,int n){
   // int n=nums.size();
    int p=1,maxp=0;
    for(int i=0; i<n; i++){
        if(nums[i]==0){
            p=1;
            continue;
        }
        if(n==1){
            maxp=nums[i];
        }
        else{
             p=p*nums[i];
        maxp=max(p,maxp);

        }
        
         
    }
    
    if(maxp<0 && n!=1){
        return 0;
    }
    else{
         return maxp;

    }
        
    }
    // int p=1,maxp=INT_MIN;
    // for(int i=0; i<n; i++){
    //     if(a[i]==0){
    //         p=1;
    //         continue;
    //     }
    //     p=p*a[i];
    //     maxp=max(p,maxp);
         
    // }
    // if(maxp<0){
    //     return 0;
    // }
    // else{
    //      return maxp;

    // }
    
//}
int main(){
    vector<int>a={3,-1,4};
    int n=a.size();
   cout<< MaxProduct(a,n);
    return 0;
}
/*
1,2,3,4,5,0
1,2,-3,0,-4,-5
2,3,-2,4
Input: nums = [-2,0,-1]
Output: 0
Input
nums =
[3,-1,4]

Use Testcase
Output
3
Expected
4
*/