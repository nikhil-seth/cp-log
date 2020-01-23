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

	int t,a,b,c,n,ma;
	cin>>t;
	while(t--){
		cin>>a>>b>>c>>n;
		ma=max(a,max(b,c));
		n-=(ma-a);
		n-=(ma-b);
		n-=(ma-c);
		if(n<0 || n%3!=0){
			cout<<"NO";
		}
		else
			cout<<"YES";
		cout<<endl;
	}
}