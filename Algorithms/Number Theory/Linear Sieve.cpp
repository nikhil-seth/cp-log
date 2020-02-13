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
#define mms(a) memset(a,0,sizeof(a))
using namespace std;
/* 
Linear Sieve
*/
int n;
vector<int> v;
void sieve(){
vector<int> pi(n+1,0);
	for(int i=2;i<=n;i++){
		if(pi[i]==0){
			v.pb(i);
			pi[i]=i;
		}
		for(int j=0;j<v.size() && v[j]<=pi[i] && i*v[j]<=n;j++)
			pi[i*v[j]]=v[j];
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