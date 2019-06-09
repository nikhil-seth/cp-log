#include<bits/stdc++.h>
#define LL long long
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
	fio
	int t,n,a,b,k,m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		int arr[n];
		FORA(x,arr)
			x=0;
		while(m--){
			cin>>a>>b>>k;
			arr[a]+=k;
			if(b<n-1)
				arr[b+1]-=k;
		}
		int mv=0,val=0;
		FOR(i,0,n-1){
			val+=arr[i];
			mv=max(mv,val);
		}
		cout<<mv<<endl;
	}
}