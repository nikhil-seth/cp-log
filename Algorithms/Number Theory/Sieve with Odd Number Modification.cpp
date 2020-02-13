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
Odd Sieve
*/
int n;
vector<int> v;
void sieve(){
	int m=(n-3)/2+1;
	vector<bool> vis(m,1);
	if(n>=2)
		v.pb(2);
	for(int i=3;i<=n;i+=2){
		if(vis[(i-3)/2]){
			v.pb(i);
			for(int j=i*i;j<=n;j+=(2*i))
				vis[(j-3)/2]=0;
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