#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="5214";
    vector<int>s1;
    for(int i=0; i<s.size();i++){
        if(s[s.size()-1]%2!=0){
             cout<<s;
             break;
        }
        else{
            
            s1.push_back(s[i]);
        }
    }
    for(int i=0; i<s1.size(); i++){
        cout<<s1[i];
    }
    
    return 0;
}