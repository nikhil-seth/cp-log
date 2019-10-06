// https://practice.geeksforgeeks.org/problems/stickler-theif/0
#include<bits/stdc++.h>
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define ll long long
#define mod1 1000000007
using namespace std;
int main(){
	fastio
	int t;
	cin>>t;
	while(t--){
	    int n,ans;
	    cin>>n;
	    int arr[n];
	    FORA(x,arr) cin>>x;
	    int incl=arr[0],excl=0;
	    for(int i=1;i<n;i++){
	        int temp=max(incl,excl);
	        incl=excl+arr[i];
	        excl=temp;
	    }
	    cout<<max(incl,excl)<<endl;
	}
}