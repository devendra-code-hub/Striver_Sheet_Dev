#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> rotatematrix(vector<vector < int>> & matrix){
   int n = matrix.size();
    vector < vector < int >> rotated(n, vector < int > (n, 0));
    
    for(int i=0; i<n; i++){
        for(int j=0;j<n;  j++ ){
            rotated[j][n-i-1]=matrix[i][j];
        }
    }

    return rotated;
}

int main(){
    vector<vector<int>>matrix={{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    int m=matrix.size();
    int n=matrix[0].size();
    vector<vector<int>> rotated= rotatematrix(matrix);
   cout<<"[";
    for(int i=0; i<rotated.size(); i++){
         cout<<"[";
        for(int j=0;j<rotated[0].size(); j++){
            cout<<rotated[i][j]<<",";
        }
         cout<<"]";
    }
     cout<<"]";

    return 0;
}
/*
Input:
 [[1,2,3],[4,5,6],[7,8,9]]

Output
: [[7,4,1],[8,5,2],[9,6,3]]

Input:
 [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]

Output:
[[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]

*/