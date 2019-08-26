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
	fastio
	//fio
	int n,t;
	cin>>n>>t;
	int arr[n];
	FORA(x,arr)
		cin>>x;
	bool vis[n];
	memset(vis,0,sizeof(vis));
	int i=1;
	while(i!=t && vis[i-1]!=1 && i<n){
		vis[i-1]=1;
		i=i+arr[i-1];
	}
	if(i==t)
		cout<<"YES";
	else
		cout<<"NO";
}
