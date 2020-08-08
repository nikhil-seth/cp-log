#include<bits/stdc++.h>
#define ll long long
#define UL unsigned long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define elif else if
#define pb push_back
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define mp(a,b) make_pair(a,b)
#define mms(a) memset(a,0,sizeof(a))
using namespace std;
int main(){
	fastio
	ll t;
	cin>>t;
	while(t--){
		ll n,temp;
		cin>>n;
		bool arr[n][n];
		FOR(i,0,n-1){
			FOR(j,0,n-1)
				cin>>arr[i][j];
		}
		ll calc=(1<<n)-1;
		ll *dp;
		dp=new ll[calc+1];
		dp[0]=1;
		//cout<<"saD"<<endl;
		FOR(i,0,calc){
			int tt=__builtin_popcount(i);
			FOR(j,0,n-1){
				if(arr[tt][j]==0 || (i & (1<<j))) // either not valid or used.
					continue;
				dp[i|(1<<j)]+=dp[i];
				// humne jth subject assign kardiya.
			}
		}
 		cout<<dp[(1<<n)-1]<<endl; 
 		//delete[] dp;
	}
}