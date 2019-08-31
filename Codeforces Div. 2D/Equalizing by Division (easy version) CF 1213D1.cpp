#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define ld unsigned long
using namespace std;
ll fn(ll i,ll no){
	ll ctr=0;
	if(i==no)
		return 0;
	while(i>0){
		i=i>>1;
		ctr++;
		if(i==no)
			return ctr;
		if(i<no)
			return -1;
	}
	return -1;
}
int main(){
	fastio
	//fio
	int n,x,k;
	cin>>n>>k;
	int arr[n];
	unordered_set<int> s;
	FOR(i,0,n-1){
		cin>>arr[i];
		int x=arr[i];
		while(x>0){
			s.insert(x);
			x=x>>1;
		}
	}
	sort(arr,arr+n);
	int ans=1e9;
	for(auto it=s.begin();it!=s.end();it++){
		int val=0;
		int ctr=0;
		for(int j=0;j<n && ctr<k;j++){
			int x=fn(arr[j],(*it));
			if(x!=-1){
				val+=x;
				ctr++;
			}
		}
		if(ctr>=k && val<ans)
			ans=val;
	}
	cout<<ans;
}