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

	int a,b,c;
	int x,y,z;
	cin>>x>>y>>z>>a>>b>>c;
	bool f=1;
	if(f && a>=x)
		a-=x;
	else
		f=0;
	if(f && a+b>=y){
		c=c+a+b-y;
	}
	else
		f=0;
	if(f && c>=z)
		c-=z;
	else
		f=0;
	if(f==0)
		cout<<"NO";
	else
		cout<<"YES";
}
