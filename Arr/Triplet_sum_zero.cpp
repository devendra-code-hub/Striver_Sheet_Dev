#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> triplet_sum_zero(vector<int>&a){
    int n=a.size();
    //vector<int>ans;
    set<vector<int>>st;

    for(int i=0; i<n-1; i++){
        for(int j=i; j<n-1; j++){
            for(int k=j; k<n; k++){
                if(((i!=j) && (j!=k) && (k!=i))){
                     
                    if((a[i]+a[j]+a[k])==0){
                        vector<int>temp={a[i],a[j],a[k]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);


                        // ans.push_back(a[i]);
                        // ans.push_back(a[j]);
                        // ans.push_back(a[k]);
                    }

                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;

}
int main(){
    vector<int>a={-1,0,1,0};

    vector<vector<int>>ans=triplet_sum_zero(a);

    for(auto it: ans){
        for(auto it2: it){
            cout<<it2<<" ";
        }
    }

    return 0;
}
/*
-1,0,1,0]
-1,0,1,2,-1,-4
*/