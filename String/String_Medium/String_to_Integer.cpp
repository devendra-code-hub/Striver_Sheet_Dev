#include<bits/stdc++.h>
using namespace std;
 bool checkNeg(string s){
    for(int i=0; i<s.size(); i++){
        if(s[0]=='-'){
            return true;
        }
    }
    return false;

}
 int stringToInt(string s){
    int n=s.size();
    vector<int>ans;
     for(int i=0; i<n; i++){
        if((s[i]>=char(65) && s[i]<=char(90)) ||(s[i]>=char(97) && s[i]<=char(122)) ){
            break;
        }
        else{
            ans.push_back(s[i]);
        }

     }
     int ans1=0;
     for(int i=0; i<ans.size(); i++){
        ans1+=ans[i]*pow(10,ans.size()-1-i);

     }

   if (checkNeg(s)){
    ans1=-1*ans1;
   }
   return ans1;

 }
int main(){
    string s="432";
    cout<<stringToInt(s);

    return 0;
}