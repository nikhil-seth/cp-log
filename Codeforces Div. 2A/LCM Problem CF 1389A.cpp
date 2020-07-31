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
	ll t;
	cin>>t;
	ll l,r;
	while(t--){
		cin>>l>>r;
		if(l==1)
			cout<<l<<' '<<l+1;
		else if(l*2<=r)
			cout<<l<<' '<<2*l;
		else
			cout<<-1<<' '<<-1;
		cout<<endl;
	}
}