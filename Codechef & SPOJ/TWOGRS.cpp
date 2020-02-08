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
#define ld long double
#define mms(a) memset(a,0,sizeof(a))
using namespace std;
bool res(ll a,ll b,ll c,ll sum){
	if(sum==0)
		return 1;
	if(sum==1){
		if(a>=1)
			return 1;
		if(b>=2)
			return 1;
	}
	if(sum==2){
		if(b>=1)
			return 1;
		if(a>=2)
			return 1;
	}

	return 0;
}
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int t;
	cin>>t;
	while(t--){
		ll a,b,c;
		cin>>a>>b>>c;
		ll sum=a+b*2+c*3;
		if(sum%2!=0){
			cout<<"NO\n";
			continue;
		}
		if(a%2==0 && b%2==0 && c%2==0){
			cout<<"YES\n";
			continue;
		}
		sum/=2;
		ll x=min(c,sum/3);
		sum-=x*3;
		x=min(b,sum/2);
		sum-=x*2;
		sum-=min(sum,a);
		if(sum==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}


