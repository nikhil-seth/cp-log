#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
using namespace std;
const int N=1e6+7;
ll bit[N],n,m,c;
void add(ll index,ll value)
{
	for(;index<=n;index+=index&(-index))
		bit[index]+=value;
}
ll sum(ll index)
{
    ll res=0;
    for(;index>0;index-=index & (-index))
    	res+=bit[index];
    return res;
}
int main(){
	#ifndef ONLINE_JUDGE
	fio
	#endif
	fastio
	cin>>n>>m>>c;
	add(1,c);
	add(n+1,-c);
	while(m--){
		char x;
		cin>>x;
		if(x=='Q'){
			ll u;
			cin>>u;
			cout<<sum(u)<<'\n';
		}
		else{
			ll u,v,k;
			cin>>u>>v>>k;
			add(u,k);
			add(v+1,-k);
		}
	}

}
