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
	ll t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		bool arr[n][n];
		mms(arr);
		ll x=k%n,y=k/n;
		if(x)
			cout<<2;
		else
			cout<<0;
		cout<<endl;
		FOR(i,0,n-1){
			for(int j=0;j<n && k;j+=1){
				arr[j][(j+i)%n]=1;
				k-=1;
			}
			if(!k) break;
		}
		FOR(i,0,n-1){
			FOR(j,0,n-1)
				cout<<arr[i][j];
			cout<<endl;
		}
	}
}	