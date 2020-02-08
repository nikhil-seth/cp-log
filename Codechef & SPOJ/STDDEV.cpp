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
#define ld long double
#define mms(a) memset(a,0,sizeof(a))
using namespace std;
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int t;
	cin>>t;
	while(t--){
		ld n,s;
		cin>>n>>s;
		if(n==1 && s==0){
			cout<<2;
		}
		else if(n==1){
			cout<<-1;
		}
		else{
	    ld a=sqrt((n*n*s*s)/(n-1));
	    cout<<fixed<<setprecision(6)<<a<<" ";
			FOR(i,1,n-1)
				cout<<0<<' ';
		}
		cout<<endl;
	}
}
