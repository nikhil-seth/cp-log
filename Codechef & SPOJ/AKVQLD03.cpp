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
int n;
void update(ll bit[],int u,int val){
	while(u<n){
		bit[u]+=val;
		u|=(u+1);
	}
}
ll sum(ll bit[],int u){
	ll ret=0;
	while(u>=0){
		ret+=bit[u];
		u=(u&(u+1))-1;
	}
	return ret;
}
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int q;
	cin>>n>>q;
	ll bit[n];
	mms(bit);
	string s;
	int a,b;
	while(q--){
		cin>>s;
		if(s[0]=='A' || s[0]=='a'){
			cin>>a>>b;
			update(bit,a-1,b);
		}
		else{
			cin>>a>>b;
			ll x=0;
			x=sum(bit,b-1);
			x-=sum(bit,a-2);
			cout<<x<<endl;
		}
	}
}
