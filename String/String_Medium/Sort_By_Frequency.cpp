#include<bits/stdc++.h>
using namespace std;
string sortbyfreq(string str){
   int n=str.size();
   string ans;
   unordered_map<char,int>freq;
   for(int i=0; i<n; i++){
    freq[str[i]]++;
   }
   priority_queue<pair<int,char>>pq;
   // push character with freq in the priority queue
   for(auto it:freq){
    pq.push({it.second,it.first});
   }


   while(!pq.empty()){
    auto temp=pq.top();
    int freq1=temp.first;
    char ch=temp.second;
    ans+=string(freq1,ch);
    pq.pop();
   }
   

   
    return ans;
}
int  main(){
    //tree,aAbb
    string str="aAbb";
    cout<<sortbyfreq(str);
    
    return 0;

}