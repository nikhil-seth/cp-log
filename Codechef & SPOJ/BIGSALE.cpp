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
double fn(double p[]){
	double x;
	x=pow(p[2]/100,2);
	x*=p[1];
	x*=p[0];
	return x;
}
int main(){
	#ifndef ONLINE_JUDGE
	fio
	#endif
	ll t,n;
	cin>>t;
	while(t--){
		cin>>n;
		double ans=0;
		double p[3];
		FOR(i,0,n-1){
			FOR(j,0,2){
				cin>>p[j];
			}
			ans+=fn(p);
		}
		cout<<fixed<<setprecision(9)<<ans<<endl;
	}
}