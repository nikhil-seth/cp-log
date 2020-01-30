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
ll bit[1030][1030];
int n;
void update(int u,int v,int val){
	int i;
	while(u<n){
		i=v;
		while(i<n){
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
		FOR(j,0,n-1)
			cout<<bit[i][j]<<' ';
		cout<<endl;
	}
}
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int data[n][n];
		mms(data);
		mms(bit);
		char s[5];
		while(1){
			scanf("%s",s);
			if(s[1]=='E'){
				int u,v,val;
				scanf("%d%d%d",&u,&v,&val);
				update(u,v,val-data[u][v]);
				data[u][v]=val;
			}
			else if(s[1]=='U'){
				int x1,x2,y1,y2;
				scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
				ll x=0;
				x+=sum(x2,y2);
				x+=sum(x1-1,y1-1);
				x-=sum(x2,y1-1);
				x-=sum(x1-1,y2);
				printf("%lld\n",x);
			}
			else
				break;
		}
		printf("\n");
	}
}