#include<bits/stdc++.h>
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define ll long long
#define mod1 1000000007
#define MAXN 1000001 
using namespace std;
#include<bits/stdc++.h>
using namespace std;
int main(){
	fastio
	//fio
	ll n,m;
	cin>>n>>m;
	bool row[n],col[n];
	memset(row,0,sizeof(row));
	memset(col,0,sizeof(col));
	ll x=n*n,ans;
	ll a,b;
	ll rc=0,cc=0;
	while(m--){
		cin>>a>>b;
		if(row[a-1]==0){
			row[a-1]=1;
			rc++;
		}
		if(col[b-1]==0){
			col[b-1]=1;
			cc++;
		}
		ans=x-n*rc-(n-rc)*cc;
		cout<<ans<<' ';
	}
}
