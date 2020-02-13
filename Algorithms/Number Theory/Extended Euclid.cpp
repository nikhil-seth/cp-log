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
// Euclid's method to find x & y satisfying ax+by=gcd(a,b).
template<class T>
T gcd(T a,T b,T &x,T &y){
	if(b==0){
		x=1;
		y=0;
		return a;
	}
	T x1,y1,d;
	d=gcd(b,a%b,x1,y1);
	x=y1;
	y=x1-(a/b)*y1;
	return d;
}
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	ll x,y,a,b;
	a=6;
	b=4;
	cout<<gcd(a,b,x,y)<<' '<<x<<' '<<y<<endl;
}