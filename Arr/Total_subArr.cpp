#include<bits/stdc++.h>
using namespace std;
int totalsubArr(vector<int>& a,int k){
    int n=a.size();
    int sum=0;
    int count=0;
    for(int i=0; i<n; i++){
        //int sum=0;
        for(int j=i; j<n; j++){
            sum+=a[j];
            if(sum==k){
                count++;
                 sum=0;
            }
        }
          
    }
    return count;
}
int main(){
    vector<int>a={1,1,1};
    int k=3;
    cout<<totalsubArr(a,k);
    
    return 0;
}
/*
 N = 4, array[] = {3, 1, 2, 4}, k = 6
 Input Format:
 N = 3, array[] = {1,2,3}, k = 3
Result:
 2
 Input: nums = [1,1,1], k = 2
Output: 2
*/