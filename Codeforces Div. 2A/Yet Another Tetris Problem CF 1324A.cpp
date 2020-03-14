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
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int arr[n];
		int mval=INT_MAX;
		FORA(x,arr){
			cin>>x;
			mval=min(mval,x);
		}
		bool f=1;
		FORA(x,arr){
			if((x-mval)%2!=0)
				f=0;
		}
		if(f)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}