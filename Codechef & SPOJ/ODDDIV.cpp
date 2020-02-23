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
long d[100001];
ll bit[100001];
ll sum(int n){
	ll ret=0;
	while(n>=0){
		ret+=bit[n];
		n=(n&(n+1))-1;
	}
	return ret;
}
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	d[1]=0;
	for(long i=1;i<100001;i+=2){
		for(long j=i;j<100001;j+=i)
			d[j]+=i;
	}
	FOR(i,1,100000){
		int u=i;
		while(u<100001){
			bit[u]+=(d[i]);
			u|=(u+1);
		}
	}
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		ll x=sum(b);
		x=x-sum(a-1);
		cout<<x<<endl;
	}
}