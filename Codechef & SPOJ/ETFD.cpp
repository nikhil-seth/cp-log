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
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	const int n=1e6+1;
	int tot[n];
	int depth[n];
	vector<int> v[20];
	FOR(i,1,n-1){
		tot[i]=i;
		depth[i]=0;
	}
	v[0].pb(1);
	depth[1]=0;
	FOR(i,2,n-1){
		if(tot[i]==i){
			tot[i]=i-1;
			for(int j=i*2;j<n;j+=i)
				tot[j]-=tot[j]/i;
		}
		depth[i]=depth[tot[i]]+1;
		if(depth[i]<20)
			v[depth[i]].pb(i);
	}
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m,k;
		scanf("%d%d%d",&n,&m,&k);
		int x,y;
		x=(upper_bound(v[k].begin(),v[k].end(),n-1)-v[k].begin());
		y=(upper_bound(v[k].begin(),v[k].end(),m)-v[k].begin());
		printf("%d\n",y-x);
	}
}