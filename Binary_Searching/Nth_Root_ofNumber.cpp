#include<bits/stdc++.h>
using namespace std;

	int NthRoot(int n, int m)
	{
	    // Code here.
	    for(long long i=1; i<=m; i++){
	        if(pow(i,n)==m){
	            return i;
	        }
	        
	    }
	    return -1;
	}  
int main(){
    int n,m;
    cin>>n>>m;
     
    cout<<NthRoot(n,m);

    return 0;
}