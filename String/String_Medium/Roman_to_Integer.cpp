#include<bits/stdc++.h>
using namespace std;
   int romanToInt(string s) {
        int i=1,v=5,x=10,l=50,c=100,d=500,m=1000;
        int n=s.size();
        int ans=0;
        for(int j=0; j<n-1; j++){
            if(s[j]=='I' && (s[j+1]=='V' || s[j+1]=='X')){
                if(s[j+1]=='V'){
                    ans+=v-1;;
                }
                else{
                    ans+=x-1;
                }
            }
            else if(s[j]=='X' && (s[j+1]=='L' || s[j+1]=='C')){
                if(s[j+1]=='L'){
                    ans+=l-x;;
                }
                else{
                    ans+=c-x;
                }
            }
             else if(s[j]=='C' && (s[j+1]=='D' || s[j+1]=='M')){
                if(s[j+1]=='D'){
                    ans+=d-c;;
                }
                else{
                    ans+=m-c;
                }
            }
            else{
                if(s[j]=='I'){
                    ans+=i;
                }
                else if(s[j]=='V'){
                    ans+=v;
                }
                else if(s[j]=='X'){
                    ans+=x;
                }
                else if(s[j]=='L'){
                    ans+=l;
                }
                else if(s[j]=='C'){
                    ans+=c;
                }
                else if(s[j]=='D'){
                    ans+=d;
                }
                else if(s[j]=='M'){
                    ans+=m;
                }

            }
        }
        return ans;
        
    }
int main(){
    //LVIII,XLV
    string s="XLV";
    cout<<romanToInt( s);
    
    return 0;
}