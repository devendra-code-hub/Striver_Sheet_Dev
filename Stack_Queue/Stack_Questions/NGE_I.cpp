// Next Greater Element -I

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> NSEI( vector<int> & v){
    int n = v.size();
    vector<int> nse(n,-1);
    stack<int> st;

    for(int i=n-1; i>=0; i++){
        while(!st.empty() && st.top()<= v[i]){
            st.pop();
        }
         if (!st.empty()) {
            nse[i] = st.top();
        }
        st.push(v[i]);
    }

    return nse;
}




int main(){
    vector<int> v={2,4,6,2,1,6};
    vector<int> ans(v.size());
     ans = NSEI(v);

     for(int i=0; i<v.size(); i++){
        cout<<ans[i]<<" ";
     }

    return 0;
}