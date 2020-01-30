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
ll bit[2010][2010];
int n,m;
void update(int u,int v,int val){
	int i;
	while(u<n){
		i=v;
		while(i<m){
			bit[u][i]+=val;
			i=i|(i+1);
		}
		u=u|(u+1);
	}
}
ll sum(int u,int v){
	int i;
	ll ret=0;
	while(u>=0){
		i=v;
		while(i>=0){
			ret+=bit[u][i];
			i=(i&(i+1))-1;
		}
		u=(u&(u+1))-1;
	}
	return ret;
}
void pr(){
	FOR(i,0,n-1){
		FOR(j,0,m-1)
			cout<<bit[i][j]<<' ';
		cout<<endl;
	}
}
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int q,val;
	scanf("%d%d%d",&n,&m,&q);
	FOR(i,0,n-1){
		FOR(j,0,m-1){
			scanf("%d",&val);
			update(i,j,val);
		}
	}
	int a,b,c,d;
	while(q--){
		scanf("%d",&a);
		if(a==1){
			int u,v,val;
			scanf("%d%d%d",&u,&v,&val);
			update(u-1,v-1,val);
		}
		else{
			int x1,x2,y1,y2;
			scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
			x1-=1;
			x2-=1;
			y1-=1;
			y2-=1;
			ll x=0;
			x+=sum(x2,y2);
			x+=sum(x1-1,y1-1);
			x-=sum(x2,y1-1);
			x-=sum(x1-1,y2);
			printf("%lld\n",x);
		}
	}
}