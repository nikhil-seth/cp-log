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
/*
	Chinese Remainder Theorem - Strong Form
	TC = O(nlogn)
*/
int gcd(int a,int b,int &x,int &y){
	if(b==0){
		y=0;
		x=1;
		return a;
	}
	int d,x1,y1;
	d=gcd(b,a%b,x1,y1);
	x=y1;
	y=x1-(a/b)*y1;
	return d;
}
pair<int,int> crt(vector<int> &a,vector<int> &m){
	if(a.size()!=m.size())
		return mp(-1,-1);
	int a1,m1;
	a1=a[0];
	m1=m[0];
	for(int i=1;i<a.size();i++){
		int p,q,g;
		g=gcd(m1,m[i],p,q);
		if(a1%g!=a[i]%g)
			return mp(-1,-1);
		int x=((a1*m[i]*q+a[i]*m1*p)/g)%((m1*m[i])/g);
		a1=x;
		m1=(m1*m[i]/g);
	}
	if(a1<0)	 a1+=m1;
	return mp(a1,m1);
}
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif

	
	return 0;
}