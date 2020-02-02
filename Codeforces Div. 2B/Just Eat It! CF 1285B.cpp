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
		ll arr[n];
		FORA(x,arr)
			cin>>x;
		ll s1=0;
		bool f=0;
		FOR(i,0,n-1){
			s1+=arr[i];
			if(s1<=0){
				f=1;
				break;
			}
		}
		s1=0;
		for(int j=n-1;!f && j>=0;j--){
			s1+=arr[j]; 
			if(s1<=0){
				f=1;
				break;
			}
		}
		if(f==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}