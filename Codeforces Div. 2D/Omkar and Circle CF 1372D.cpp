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
	ll n;
	cin>>n;
	ll arr[n];
	FORA(x,arr)
		cin>>x;
	ll brr[2*n];
	int j=0;
	for(int i=0;i<n;i+=2)
		brr[j++]=arr[i];
	for(int i=1;i<n;i+=2)
		brr[j++]=arr[i];
	for(int i=0,j=n;i<n;i+=1,j+=1)
		brr[j]=brr[i];
	ll ts=0,ans=0,ks=(n+1)/2;
	FOR(i,0,ks-1)
		ts+=brr[i];
	ans=max(ans,ts);
	FOR(i,ks,2*n-1){
		ts+=brr[i];
		ts-=brr[i-(n+1)/2];
		ans=max(ans,ts);
	}
	cout<<ans<<endl;
}
