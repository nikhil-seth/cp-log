// Ugly Numbers : https://practice.geeksforgeeks.org/problems/ugly-numbers/0
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
	int t,n;
	cin>>t;
	long dp[10001];
	dp[0]=1;
	long i2=0,i3=0,i5=0,j=0;
	long t2=2,t3=3,t5=5;
	while(j<10000){
	    t2=dp[i2]*2;
	    t3=dp[i3]*3;
	    t5=dp[i5]*5;
        dp[++j]=min(t2,min(t3,t5));
        if(dp[j]==t2)
            i2++;
        if(dp[j]==t3)
            i3++;
        if(dp[j]==t5)
            i5++;
    }
    
	while(t--){
	    cin>>n;
	    cout<<dp[n-1]<<endl;
	}
}
	    