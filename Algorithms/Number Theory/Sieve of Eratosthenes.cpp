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
/* 
Sieve of Eratosthenes
*/
int n;
vector<int> v;
void sieve(){
	vector<bool> vis(n+1,1);
	for(int i=2;i<=n;i++){
		if(vis[i]==1){
			v.pb(i);
			for(int j=2;i*j<=n;j++)
				vis[j*i]=0;
		}
	}
}
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	cin>>n;
	sieve();
	FORA(x,v)
		cout<<x<<' ';
}