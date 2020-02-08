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

int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int n;
	cin>>n;
	vector<bool> vis(n+2,1);
	for(int i=2;i*i<=n+1;i++){
		if(vis[i]){
			for(int j=i*i;j<=n+1;j+=i)
				vis[j]=0;
		}
	}
	if(n==1){
		cout<<1<<endl<<1;
		return 0;
	}
	else if(n==2){
		cout<<1<<endl<<"1 1";
		return 0;
	}
	cout<<2<<endl;
	FOR(i,2,n+1){
		if(vis[i])
			cout<<1<<' ';
		else
			cout<<2<<' ';
	}
}