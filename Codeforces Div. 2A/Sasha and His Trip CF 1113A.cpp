#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
using namespace std;
LL dp(int i,int n,int v,int fuel){
	if((n-i)<=fuel)
		return 0;
	if(n-i<=v)
		return (n-i-fuel)*i;
	return (v-fuel)*i + dp(i+1,n,v,v-1);
}
int main(){
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n,v;
	cin>>n>>v;
	LL res=dp(1,n,v,0);
	cout<<res;
}
