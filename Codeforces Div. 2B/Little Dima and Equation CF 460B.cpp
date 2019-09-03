#include<bits/stdc++.h>
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define ll long long
using namespace std;
int sd(long x){
	int c=0;
	while(x!=0){
		c+=(x%10);
		x/=10;
	}
	return c;
}
ll po(int a,int b){
	if(b==0)
		return 1;
	if(b==1)
		return a;
	if(b%2==0){
		ll x=po(a,b/2);
		return x*x;
	}
	return a*po(a,b-1);
}
int main(){
	fastio
	//fio
	int a,b,c;
	cin>>a>>b>>c;
	vector<long> v;
	ll sx;
	for(sx=1;sx<=81;sx++){
		ll x=po(sx,a);
		x=x*b+c;
		if(sd(x)==sx && x<1e9&& x>0)
			v.pb(x);
	}
	cout<<v.size()<<endl;
	for(auto t:v)
		cout<<t<<' ';
}