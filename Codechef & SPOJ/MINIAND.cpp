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
bool bit[400001];
int n;
void build(int arr[],int v,int tl,int tr){
	if(tl==tr){
		bit[v]=(arr[tl]%2);
	}
	else{
		int tm=(tl+tr)/2;
		build(arr,v*2,tl,tm);
		build(arr,v*2+1,tm+1,tr);
		bit[v]=bit[v*2]&bit[v*2+1];
	}
	//cout<<"Updated v :"<<v<<' '<<bit[v]<<endl;
}
bool fn(int v,int tl,int tr,int l,int r){
	bool ans;
	if(l>r)
		ans=1;
	else if(l==tl && r==tr)
		ans=bit[v];
	else{
		int tm=(tl+tr)/2;
		ans=fn(v*2,tl,tm,l,min(r,tm))&fn(v*2+1,tm+1,tr,max(l,tm+1),r);
	}
	//cout<<v<<' '<<tl<<' '<<tr<<' '<<l<<' '<<r<<' '<<ans<<endl;
	return ans;
}
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		int arr[n];
		FORA(x,arr)
			cin>>x;
		build(arr,1,0,n-1);
		int q;
		cin>>q;
		int l,r;
		while(q--){
			cin>>l>>r;
			if(fn(1,0,n-1,l-1,r-1))
				cout<<"ODD\n";
			else
				cout<<"EVEN\n";
		}
	}
}