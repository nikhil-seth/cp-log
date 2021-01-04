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
	ll t,n,x,p,k;
	cin>>t;
	while(t--){
		cin>>n>>x>>p>>k;
		p-=1,k-=1;
		ll arr[n];
		FORA(x,arr) cin>>x;
		sort(arr,arr+n);
		if((p<k && arr[p]<x) || (p>k && x<arr[p]))
			cout<<-1;
		else{
			if(arr[p]==x)
				cout<<0;
			else{
				ll ctr=0;
				if(arr[p]<x){
					while(p<n && arr[p]<x)
						ctr+=1,p+=1;
				}
				else{
					while(p>=0 && arr[p]>x)
						ctr+=1,p-=1;
				}
				cout<<ctr;
			}
		}
		cout<<endl;
	}
}