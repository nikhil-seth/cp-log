#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define ull unsigned long long
#define mp(a,b) make_pair(a,b)
#define pi pair<int,int>
#define mms(a) memset(a,0,sizeof(a))
using namespace std;
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	ull u,v;
	cin>>u>>v;
	if(u>v || ((u%2)^(v%2)))
		cout<<-1;
	else if(u==v){
		if(u==0)
			cout<<0;
		else
			cout<<1<<endl<<u;
	}
	else if((v-u)%2==0){
		ull p=(v-u)/2;
		ull k=u^p;
		if(k==u+p)
			cout<<2<<endl<<u+p<<' '<<p<<endl;
		else
			cout<<3<<endl<<u<<' '<<(v-u)/2<<' '<<(v-u)/2;
	}
}