// https://practice.geeksforgeeks.org/problems/temple-offerings/0
// https://www.geeksforgeeks.org/temple-offerings/
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
	    int n;
	    cin>>n;
	    int th[n];
	    FORA(x,th)  cin>>x;
	    int lh[n],rh[n];
	    lh[0]=1;// Value 0th ke left pe koi bada nahi toh iski value 1..
	    FOR(i,1,n-1){
	        if(th[i]>th[i-1])
	            lh[i]=lh[i-1]+1;
	        else
	            lh[i]=1;
	    }
	    rh[n-1]=1;
	    for(int i=n-2;i>=0;i--){
	        if(th[i]>th[i+1])
	           rh[i]=rh[i+1]+1;
	        else
	            rh[i]=1;
	    }
	    int ctr=0;
	    FOR(i,0,n-1)
	        ctr+=max(lh[i],rh[i]);
	    cout<<ctr<<endl;
	}
}