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
		ll k=n;
		if(k==1){
			cout<<1;
		}
		else if(k==3)
			cout<<"1 3 2";
		else{
			while(!(k&1)) k>>=1;
			if(k==1){
				cout<<-1;
			}
			else{
				cout<<"2 3 1 ";
				ll l=4;
				k=l+2;
				while(k<=n+1 && l<=n){
					cout<<k-1<<' '<<k-2<<' ';
					l*=2;
					while(k<l && k<=n){
						cout<<k<<' ';
						k+=1;
					}
					k=l+2;
				}
			}
		}
		cout<<"\n";
	}
}