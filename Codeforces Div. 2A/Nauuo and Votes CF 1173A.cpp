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
	int x,y,z;
	cin>>x>>y>>z;
	int ans=x-y;
	if(ans>0){
		if(ans>z)
			cout<<'+';
		else
			cout<<'?';
	}
	else if(ans==0){
		if(z==0)
			cout<<'0';
		else 
			cout<<'?';
	}
	else{
		if(z<abs(ans))
			cout<<'-';
		else
			cout<<'?';
	}
}