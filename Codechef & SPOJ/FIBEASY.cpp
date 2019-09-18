#include<bits/stdc++.h>
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define ll long long
#define mod1 1000000007
using namespace std;
int fn(int n){
	if(n==0)
		return 1;
	if(n==1)
		return 2;
	if(n%2==0){
		long a=fn(n/2);
		a=(a*a)%60;
		return a;
	}
	long a=fn(n-1);
	a=(a*2)%60;
	return a;
}
int main(){
	fastio
	//fio
	vector<int> v(60);
	v[0]=0;
	v[1]=1;
	for(int i=2;i<60;i++){
		v[i]=(v[i-1]+v[i-2])%10;
	}
	int t;
	ll n;
	cin>>t;
	while(t--){
		cin>>n;
		int ctr=0;
		while(n>0){
			n=n>>1;
			ctr++;
		}
		ctr-=1;
		int x=fn(ctr);
		cout<<v[x-1]<<endl;
	}
}