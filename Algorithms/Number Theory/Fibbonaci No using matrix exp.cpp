#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
#define mp(a,b) make_pair(a,b)
#define pi pair<int,int>
#define mms(a) memset(a,0,sizeof(a))
using namespace std;
// Matrix Exp. to find nth Fibbonaci No.
void fib(ll m[2][2],ll n,ll mod=1000000007){
	ll res[2][2]={{1,0},{0,1}};
	ll temp[2][2];
	while(n>0){
		if(n&1){
			
			temp[0][0]=((res[0][0]*m[0][0])%mod+(res[0][1]*m[1][0])%mod)%mod;
			temp[0][1]=((res[0][0]*m[0][1])%mod+(res[0][1]*m[1][1])%mod)%mod;
			temp[1][0]=((res[1][0]*m[0][0])%mod+(res[1][1]*m[1][0])%mod)%mod;
			temp[1][1]=((res[1][0]*m[0][1])%mod+(res[1][1]*m[1][1])%mod)%mod;
			FOR(i,0,1){
				FOR(j,0,1)
					res[i][j]=temp[i][j];
			}
		}
		temp[0][0]=((m[0][0]*m[0][0])%mod+(m[0][1]*m[1][0])%mod)%mod;
		temp[0][1]=((m[0][0]*m[0][1])%mod+(m[0][1]*m[1][1])%mod)%mod;
		temp[1][0]=((m[1][0]*m[0][0])%mod+(m[1][1]*m[1][0])%mod)%mod;
		temp[1][1]=((m[1][0]*m[0][1])%mod+(m[1][1]*m[1][1])%mod)%mod;
		m[0][0]=temp[0][0];
		m[0][1]=temp[0][1];
		m[1][0]=temp[1][0];
		m[1][1]=temp[1][1];
		n>>=1;
	}
	m[0][0]=res[0][0];
	m[0][1]=res[0][1];
	m[1][0]=res[1][0];
	m[1][1]=res[1][1];
}
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	ll n;
	cin>>n;
	if(n<=1){
		cout<<1;
		return 0;
	}
	ll m[2][2]={{0,1},{1,1}};
	fib(m,n-1);
	ll ans=(m[0][1]+m[1][1])%1000000007;
	cout<<ans;
}
