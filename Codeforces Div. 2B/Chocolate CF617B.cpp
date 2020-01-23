#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	fio
	#endif
	ll n;
	cin>>n;
	ll x,j=0,pc=-1;
	for(ll i=0;i<n;i++){
		cin>>x;
		if(x==1){
			if(pc==-1){
				pc=i;
				j=1;
			}
			else{
				j=j*(i-pc);
				pc=i;
			}
			//cout<<j<<' ';
		}
	}
	cout<<j;
}