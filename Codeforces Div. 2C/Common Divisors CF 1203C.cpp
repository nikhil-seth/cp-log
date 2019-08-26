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
ll gcd(ll a,ll b){
	if(b==0)
		return a;
	return gcd(b,a%b);
}
ll count_divisor(ll x){
	ll cnt=0;
	for(ll i=1;i*i<=x;i++){
		if(x%i==0){
			cnt+=2;
			if(i==x/i)
				cnt--;
		}
	}
	return cnt;
}
int main(){
	fastio
	//fio
	int n;
	cin>>n;
	ll ans,val;
	cin>>ans;
	FOR(i,1,n-1){
		cin>>val;
		ans=gcd(val,ans);
	}
	cout<<count_divisor(ans);
}