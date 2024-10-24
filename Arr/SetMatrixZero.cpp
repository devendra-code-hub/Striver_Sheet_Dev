#include<bits/stdc++.h>
using namespace std;
//pair<int,int> SetMatrixZero(int a[][3], int n){
void markrow(int a[][4],int n,int col,int ridx){
   for(int i=0; i<col; i++){
           if(a[ridx][i]!=0){
            a[ridx][i]=-1;
           }
   }
}
void markcol(int a[][4],int n,int col,int cidx){
   for(int i=0; i<n; i++){
           if(a[i][cidx]!=0){
            a[i][cidx]=-1;
           }
   }
}


void SetMatrixZero(int a[][4], int n){
    int ridx=-1,cidx=-1,col=4;

    for(int i=0; i<n; i++){
      for(  int j=0; j<col; j++){
        if(a[i][j]==0){
            ridx=i;
            cidx=j;
            markrow(a,n,col,ridx);
            markcol(a,n,col,cidx);     
             }
        
           // return {ridx,cidx};
        }
        
      }
       

   
    for(int i=0; i<n; i++){
      for(  int j=0; j<col; j++){
         if(a[i][j]==-1){
          a[i][j]=0;

         }
      } 
    }

    for(int i=0; i<n; i++){
      for(  int j=0; j<col; j++){
        cout<<a[i][j];
      }
      cout<<",";
    }


   // return {ridx,cidx};

}

int main(){
    int a[][4]={{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    int rows=sizeof(a)/sizeof(a[0]);

    SetMatrixZero(a,rows);
    // pair<int ,int > index=SetMatrixZero(a,rows);
    // cout<<index.first<<","<<index.second<<endl;

    return 0;
}
//matrix=[[1,1,1],[1,0,1],[1,1,1]]
// Output:
// [[1,0,1],[0,0,0],[1,0,1]]
/*
Input:
 matrix=[[0,1,2,0],[3,4,5,2],[1,3,1,5]]

Output:
[[0,0,0,0],[0,4,5,0],[0,3,1,0]]
*/
//leet code submission
/*
class Solution {
public:
      void markrow(vector<vector<int>>& matrix,int n,int col,int ridx){
         for(int i=0; i<col; i++){
             if(matrix[ridx][i]!=0){
                 matrix[ridx][i]='a';
                         }
                     }
               }
void markcol( vector<vector<int>>& matrix,int n,int col,int cidx){
   for(int i=0; i<n; i++){
           if(matrix[i][cidx]!=0){
            matrix[i][cidx]='a';
           }
   }
}
    void setZeroes(vector<vector<int>>& matrix) {
    int n=matrix.size();
    int col=matrix[0].size();
    int ridx=-1,cidx=-1;

    for(int i=0; i<n; i++){
      for(  int j=0; j<col; j++){
        if(matrix[i][j]==0){
            ridx=i;
            cidx=j;
            markrow(matrix,n,col,ridx);
            markcol(matrix,n,col,cidx);     
             }
        }
        
      }
       
    for(int i=0; i<n; i++){
      for(  int j=0; j<col; j++){
         if(matrix[i][j]=='a'){
          matrix[i][j]=0;

         }
      } 
    }

    for(int i=0; i<n; i++){
      for(  int j=0; j<col; j++){
        cout<<matrix[i][j];
      }
      cout<<",";
    }
        
    }
};
*/
