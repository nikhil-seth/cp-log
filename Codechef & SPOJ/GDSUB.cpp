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
ll ans(unordered_map<int,int> &m,unordered_map<int,int>::iterator it,int k){
	if(k==0)
		return 1;
	if(it==m.end())
		return 1;
	int cq=it->first;
	//cout<<"Enter :"<<cq<<endl;
	int c=it->second;
	it++;
	ll x=ans(m,it,k-1);
	x=(x*c)%mod1;
	x=(x+ans(m,it,k))%mod1;
	//cout<<"Exit :"<<cq<<' '<<x<<endl;
	return x;
}
int main(){
	fastio
	//fio
	int n,k,x;
	cin>>n>>k;
	unordered_map<int,int> m;
	FOR(i,0,n-1){
		cin>>x;
		m[x]++;
	}
	int q=m.size(),ix=0;
	pair<int,int> p[q];
	for(auto it=m.begin();it!=m.end();it++){
		p[ix++]=make_pair(it->first,it->second);
	}
	k=min(q,k);
	long dp[q+1][k+1];
	FOR(i,0,k)
		dp[q][i]=1;
	FOR(i,0,q)
		dp[i][0]=1;
	for(int i=q-1;i>=0;i--){
		for(int j=1;j<=k;j++){
			dp[i][j]=((dp[i+1][j-1]*(p[i].second))%mod1+dp[i+1][j])%mod1;
		}
	}
	ll qx=0;
	/*FOR(i,0,q){
		FOR(j,0,k)
			cout<<dp[i][j]<<' ';
		cout<<endl;
	}*/
	cout<<dp[0][k];
}
