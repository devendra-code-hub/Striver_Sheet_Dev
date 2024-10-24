#include<bits/stdc++.h>
using namespace std;
long long numberodsubstr(int n){
    if(n==1 || n==0) return 1;
    int temp=numberodsubstr(n-1);
    return n*temp;
}
int main(){
    string s="abde";
    int n=s.size();
    cout<<numberodsubstr(n);
    
    return 0;
}