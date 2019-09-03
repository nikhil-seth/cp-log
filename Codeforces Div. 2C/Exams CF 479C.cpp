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

int main(){
	fastio
	//fio
	int n;
	cin>>n;
	long a,b;
	pair<long,long> p[n];
	FOR(i,0,n-1){
		cin>>p[i].first>>p[i].second;
	}
	sort(p,p+n);
	long date=p[0].second;
	for(int i=1;i<n;i++){
		if(date<=p[i].second)
			date=p[i].second;
		else
			date=p[i].first;
	}
	cout<<date;
}