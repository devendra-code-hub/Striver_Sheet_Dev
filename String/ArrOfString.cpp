#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string>str;
   // cin.ignore(); // To ignore the newline character after the integer input
    for(int i=0;i<5; i++){
        string s;
        getline(cin,s);
        str.push_back(s);

    }
    
    sort(str.begin(),str.end());
    string first=str.front();
    string last=str.back();
    int minlength=min(first.size(),last.size());
    int i=0;
    while((i<minlength) && (first[i]==last[i])){
        i++;
    }
    cout<<first.substr(0,i);

    return 0;
}