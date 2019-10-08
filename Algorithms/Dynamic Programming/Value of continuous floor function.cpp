// https://www.geeksforgeeks.org/value-continuous-floor-function-fx-ffloorx2-x/
// Value of continuous floor function : F(x) = F(floor(x/2)) + x

#include<bits/stdc++.h>
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define ll long long
#define mod1 1000000007
using namespace std;
int main(){
	fastio
	fio
	int n;
	cin>>n;
	int arr[n];
	int m=INT_MIN;
	FORA(x,arr){
		cin>>x;
		m=max(m,x);
	}
	int dp[m+1];
	dp[0]=0;
	float x;
	FOR(i,1,m){
		x=float(i)/2;
		int q=floor(x);
		dp[i]=dp[q]+i;
	}
	FOR(i,0,n-1){
		cout<<dp[arr[i]]<<' ';
	}
	cout<<endl;
}