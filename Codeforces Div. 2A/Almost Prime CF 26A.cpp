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
	int n;
	cin>>n;
	vector<bool> vis(n+1,1);
	vector<int> v;
	for(int i=2;i<=n;i++){
		if(vis[i]){
			v.pb(i);
			for(int j=i*i;j<=n;j+=i)
				vis[j]=0;
		}
	}ll ctr=0;
	FOR(i,2,n){
		int c=0;
		int k=i;
		for(int j=0;j<v.size() && k>0 && v[j]<=k;j++){
			if(k%v[j]==0){
				c++;
				while(k%v[j]==0)
					k/=v[j];
			}
		}
		if(k==1 && c==2)
			ctr++;
	}
	cout<<ctr<<endl;
}