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
#define mod 1000000000
using namespace std;
int k;
void mult(ll a[10][10],ll b[10][10], ll temp[10][10]){
	FOR(i,0,k-1){
		FOR(j,0,k-1){
			temp[i][j]=0;
			FOR(l,0,k-1)
				temp[i][j]=(temp[i][j]+((a[i][l]%mod)*(b[l][j]%mod)%mod))%mod;
		}
	}
}
void cpyx(ll a[10][10],ll b[10][10]){
	FOR(i,0,k-1){
		FOR(j,0,k-1)
			a[i][j]=b[i][j];
	}
}
void pr(ll a[10][10]){
	FOR(i,0,k-1){
		FOR(j,0,k-1)
			cout<<a[i][j]<<' ';
		cout<<endl;
	}
}
void fn(ll mat[10][10],ll n){
	ll temp[10][10];
	ll res[10][10];
	mms(res);
	FOR(i,0,k-1){
		res[i][i]=1;
	}
	while(n>0){
		if(n&1){
			mult(res,mat,temp);
			cpyx(res,temp);
		}
		mult(mat,mat,temp);
		cpyx(mat,temp);
		n>>=1;
	}
	cpyx(mat,res);
}
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int t;
	cin>>t;
	ll b[10],mat[10][10],xt;
	while(t--){
		cin>>k;
		FOR(i,0,k-1)
			cin>>b[i];
		FOR(i,0,k-1){
			FOR(j,0,k-2){
				if(i==j+1)
					mat[i][j]=1;
				else
					mat[i][j]=0;
			}
		}
		for(int i=k-1;i>=0;i--){
			cin>>xt;
			mat[i][k-1]=xt;
		}
		ll n;
		cin>>n;
		if(n<=k){
			cout<<b[n-1]<<endl;
			continue;
		}
		else{
			fn(mat,n-k);
			ll ans=0;
			FOR(i,0,k-1)
				ans=(ans+((b[i]%mod)*(mat[i][k-1]%mod))%mod)%mod;
			cout<<ans;
		}
		cout<<endl;
		
	}
}