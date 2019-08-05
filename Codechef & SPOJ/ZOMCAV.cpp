#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
#define M 100
using namespace std;
bool fn(long arr[],int n,map<long,int> &m){
	long b[n],x=1;
	memset(b,0,sizeof(b));
	for(int i=0;i<n;i++){
		long t=max(x,i+1-arr[i]);
		b[t-1]++;
		t=arr[i]+i+1;
		if(t<n)
			b[t]--;
	}
	long val=0;
	for(int i=0;i<n;i++){
		val+=b[i];
		//cout<<val<<' ';
		if(m.find(val)==m.end())
			return 0;
		if(m[val]==0)
			return 0;
		m[val]--;
	}
	return 1;
}
int main(){
	fastio
	fio
	int t;
	cin>>t;
	while(t--){
		int n;
		long temp;
		cin>>n;
		long arr[n];
		FORA(x,arr)
			cin>>x;
		map<long,int> m;
		FOR(i,0,n-1){
			cin>>temp;
			m[temp]++;
		}
		if(fn(arr,n,m))
			cout<<"YES";
		else
			cout<<"NO";
		cout<<endl;
	}
}