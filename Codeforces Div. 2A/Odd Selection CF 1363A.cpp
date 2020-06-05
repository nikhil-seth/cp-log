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
int main(){
	fastio
	ll t,n,x;
	cin>>t;
	while(t--){
		cin>>n>>x;
		ll ec=0,oc=0,q;
		FOR(i,0,n-1){
			cin>>q;
			if(q%2==0)
				ec+=1;
			else
				oc+=1;
		}
		if(oc==0){
			cout<<"No\n";
			continue;
		}
		if(x>oc){
			if(oc%2==0)
				x-=oc-1;
			else
				x-=oc;
			if(ec>=x)
				cout<<"Yes\n";
			else
				cout<<"No\n";
		}
		else{
			if(x%2!=0 || ec>0)
				cout<<"Yes\n";
			else
				cout<<"No\n";
		}
	}
}