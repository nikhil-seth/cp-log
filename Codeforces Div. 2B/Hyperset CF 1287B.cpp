#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
#define pi pair<int,int>
#define mp(a,b) make_pair(a,b)
using namespace std;
string fn(string &a,string &b,int k){
	string x;
	FOR(i,0,k-1){
		if(a[i]==b[i])
			x.pb(a[i]);
		else if((a[i]=='S' && b[i]=='E') || (a[i]=='E' && b[i]=='S'))
			x.pb('T');
		else if((a[i]=='S' && b[i]=='T') || (a[i]=='T' && b[i]=='S'))
			x.pb('E');
	else if((a[i]=='E' && b[i]=='T') || (a[i]=='T' && b[i]=='E'))
			x.pb('S');
	}
	return x;
}
int main(){
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int n,k;
	cin>>n>>k;
	string s[n];
	set<string> mem;
	FORA(x,s){
		cin>>x;
		mem.insert(x);
	}

	int ctr=0;
	FOR(i,0,n-1){
		FOR(j,i+1,n-1){
			string st=fn(s[i],s[j],k);
			//cout<<st<<endl;
			if(mem.find(st)!=mem.end())
				ctr++;
		}
	}
	cout<<ctr/3;
}