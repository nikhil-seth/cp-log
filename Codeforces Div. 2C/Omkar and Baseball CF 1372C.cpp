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
	ll t,n;
	cin>>t;
	while(t--){
		cin>>n;
		vector<int> arr(n+1),darr(n+1);
		FOR(i,1,n){
			cin>>arr[i];
			darr[arr[i]]=i;
		}
		while(n>=1 && arr[n]==n)
			n-=1;
		bool x1,y1;
		x1=y1=0;
		ll ans=0,ctr=0;
		for(int i=1,j,r;i<=n;i+=1){
			if(arr[i]==i && !x1)
				continue;
			else if(arr[i]==i)
				y1=1;
			else
				x1=1;
		}
		if(x1 && y1)
			cout<<2;
		else if(x1)
			cout<<1;
		else
			cout<<0;
		cout<<endl;
	}
}