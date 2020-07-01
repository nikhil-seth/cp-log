#include<bits/stdc++.h>
#define ll long long
#define ull uint64_t
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
ull fn(ull x){
	ull y;
	if(x%2==0){
			y=x/2;
			y*=(x+1);
	}
	else{
			y=(x+1)/2;
			y*=x;
		}
	return y;
}
int main(){
	fastio
	ull t,n,r;
	cin>>t;
	while(t--){
		cin>>n>>r;
		ull ans=0;
		if(r<n){
			ans=fn(r);
		}
		else{
			ans=fn(n-1);
			ans+=1;
		}
		cout<<ans<<endl;
	}
}