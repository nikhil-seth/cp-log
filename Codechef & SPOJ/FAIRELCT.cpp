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
	ll t,n,m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		ll a[n],b[m],s=0;
		FORA(x,a) cin>>x,s+=x;
		FORA(x,b) cin>>x,s-=x;
		sort(a,a+n);
		sort(b,b+m);
		ll ctr=0,i=0,j=m-1;
		while(s<=0 && i<n && j>=0){
			s+=2*(b[j]-a[i]);
			j-=1,i+=1;
			ctr+=1;
		}
		if(s<=0) ctr=-1;
		cout<<ctr<<endl;
	}
}