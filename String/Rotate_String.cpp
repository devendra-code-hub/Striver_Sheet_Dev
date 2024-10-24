#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="abcde";
    int n=s.size();
    // left rotate by d charaters
    int d=4;
    string s1;
    int j=0;
    for(int i=d;i<n; i++){
        s1[j++]=s[i];

    }
    for(int i=0; i<d; i++){
        s1[j++]=s[i];
    }
     for(int i=0; i<n; i++){
        cout<<s1[i];
     }
     cout<<endl;
     int k=0;// right rotation by d
     string s2;
     for(int i=n-d; i<n; i++){
        s2[k++]=s[i];
     }
     for(int i=0; i<d;i++){
        s2[k++]=s[i];
     }
     for(int i=0; i<n; i++){
        cout<<s2[i];
     }

    return 0;
}