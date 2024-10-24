#include<bits/stdc++.h>
using namespace std;
 void spiraltraversal(vector<vector<int>> & matrix){
    int n=matrix.size();
    int m=matrix[0].size();
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            // if(i==0){
            //     cout<<matrix[i][j]<<" ";
                
            // }
            // else if((j==3) && (i!=3)){
            //         cout<<matrix[i][j]<<" ";
            //     }
            //   if((i==3)){
            //         cout<<matrix[i][n-j-1]<<" ";
            //     }
                // if((j==0) &&((i!=0) && (i!=3))){
                //     cout<<matrix[n-i-1][j]<<" ";
                // }
                if((i==1) && (j!=0 && j!=3)){
                    cout<<matrix[i][j]<<" ";
                }
                
            
            // else if(i%2!=0){
            //     cout<<matrix[i][n-j-1]<<" ";
            // }
            }
        }
    }
 
int main(){
   vector< vector<int>>matrix={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
   spiraltraversal(matrix);

    return 0;
}
/*
Input: Matrix[][] = { { 1, 2, 3, 4 },
		      { 5, 6, 7, 8 },
		      { 9, 10, 11, 12 },
	              { 13, 14, 15, 16 } }

Outhput: 1, 2, 3, 4, 8, 12, 16, 15, 14, 13, 9, 5, 6, 7, 11, 10.
Explanation: The output of matrix in spiral form.
*/