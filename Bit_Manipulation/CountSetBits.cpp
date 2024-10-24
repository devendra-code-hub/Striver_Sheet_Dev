 #include<bits/stdc++.h>
 using namespace std;
 class Solution{
     public:
       int countSetBits(int n){
           int count=0;
        for(int i=n; i>0; i--){
            int n1=i;
            while(n1>0){
                int bit=n1%2;
                if(bit==1) count++;
                n1=n1/2;
            }
        }
        
        return count;
       }
 };
 int main(){
      int t;
      cin>>t;
      while(t--){
          int n;
          cin>>n;
          Solution ob;
          cout<<ob.countSetBits(n)<<endl;
      }
      return 0;
 }