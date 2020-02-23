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
#define n 1000001
using namespace std;
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	vector<ll> pr;
	vector<bool> vis(n,1);
	pr.pb(2);
	for(ll i=3;i<n;i+=2){
		if(vis[i]==1){
			pr.pb(i);
			for(ll j=i*i;j<n;j+=(2*i))
				vis[j]=0;
		}
	}
	int i=1;
	while(1){
		ll a,b;
		cin>>a>>b;
		if(a==0 && b==0)
			return 0;
		set<ll> s;
		ll x=a;
		FOR(i,0,pr.size()-1){
			if(pr[i]>x)
				break;
			if(x%pr[i]==0){
				s.insert(pr[i]);
				while(x%pr[i]==0)
					x/=pr[i];
			}
		}
		if(x>1)
			s.insert(x);
		x=b;
		FOR(i,0,pr.size()-1){
			if(pr[i]>x)
				break;
			if(x%pr[i]==0){
				s.insert(pr[i]);
				while(x%pr[i]==0)
					x/=pr[i];
			}
		}
		if(x>1)
			s.insert(x);
		ll ans=0;
		for(auto it=s.begin();it!=s.end();it++){
			int c1=0,c2=0;
			while(a%(*it)==0){
				c1++;
				a/=(*it);
			}
			while(b%(*it)==0){
				c2++;
				b/=(*it);
			}
			ans+=abs(c1-c2);
		}
		printf("%d. %lu:%lld\n",i,s.size(),ans);
		i++;
	}
}