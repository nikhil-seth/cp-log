#include<bits/stdc++.h>
#define ll long long
#define UL unsigned long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define elif else if
#define pb push_back
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define mp(a,b) make_pair(a,b)
#define mms(a) memset(a,0,sizeof(a))
using namespace std;
struct Bitmask{
	ll mask;
	Bitmask(){
		mask=0;
	}
	Bitmask(ll x){
		mask=x;
	}
	void set(ll i){
		mask|=(1<<i);
	}
	void unset(ll i){
		mask&=(~(1<<i));
	}
	bool bit(ll i){
		return mask & (1<<i);
	}
	ll count(){
		ll x=this->mask;
		ll ctr=0;
		while(x>0){
			if(x&1) ctr+=1;
			x=x>>1;
		}
		return ctr;
	}
};
int main(){
	fastio
	Bitmask b;
	b.set(4);
	cout<<b.count();
	b.set(5);
	cout<<b.bit(3)<<' '<<b.bit(5);
	cout<<b.count();
}
