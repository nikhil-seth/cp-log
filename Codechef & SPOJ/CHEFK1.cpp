#include<bits/stdc++.h>
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define ll long long
#define mod1 1000000007
using namespace std;
int main(){
	fastio
	//fio
	int t;
	ll n,m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		ll x1=(n*(n+1)/2);
		ll x[2]={n/2,(n+1)/2};
		if(n==1){
			if(m==0 || m==1)
				cout<<m;
			else
				cout<<-1;
		}
		else if(n==2){
			if(m==1)
				cout<<1;
			else if(m==2 || m==3)
				cout<<2;
			else
				cout<<-1;
		}
		else if(m<n-1 || m>x1)
			cout<<-1;
		else if(m>=n-1 && m<=n+1)
			cout<<2;
		else if(m<=2*n)
			cout<<3;
		else{
			int dcf=3;
			m-=2*n;
			int i=0;
			while(m>0){
				m-=x[i];
				i=1-i;
				dcf++;
			}
			cout<<dcf;
		}
		cout<<endl;
	}
}