#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
using namespace std;

int main(){
	fastio
	//fio
	int n,m;
	cin>>n>>m;
	int give[n],take[n];
	memset(give,0,sizeof(give));
	memset(take,0,sizeof(take));
	int a,b,c;
	FOR(i,0,m-1){
		cin>>a>>b>>c;
		give[a-1]+=c;
		take[b-1]+=c;
	}
	ll ans=0;
	FOR(i,0,n-1){
		if(take[i]<give[i])
			ans+=(give[i]-take[i]);
	}
	cout<<ans;
}
