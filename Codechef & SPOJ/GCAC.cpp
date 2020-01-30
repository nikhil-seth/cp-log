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
	#ifndef ONLINE_JUDGE
	fio
	#endif
	ll t,n,m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		ll minsal[n];
		FORA(x,minsal)
			cin>>x;
		ll offsal[m],jc[m];
		FOR(i,0,m-1){
			cin>>offsal[i]>>jc[i];
		}
		vector<int> off[n];
		FOR(i,0,n-1){
			string s;
			cin>>s;
			FOR(j,0,m-1){
				if(s[j]=='1')
					off[i].pb(j);
			}
		}
		vector<bool> vis(m,0);
		ll ctr=0,ans=0;
		FOR(i,0,n-1){
			int ft=-1;
			FORA(x,off[i]){
				if(minsal[i]<=offsal[x] && jc[x]){
					if(ft==-1 || offsal[x]>offsal[ft])
						ft=x;
				}
			}
				if(ft==-1)
					continue;
				vis[ft]=1;
				jc[ft]--;
				ans+=offsal[ft];
				ctr++;
		}
		ll x=0;
		FOR(i,0,m-1){
			if(vis[i]==0)
				x++;
		}
		cout<<ctr<<' '<<ans<<' '<<x<<endl;
	}
}