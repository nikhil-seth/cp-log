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
	int n,m;
	cin>>n>>m;
	if((n>m && n-m>1) || (n<m && 2*n+2<m)){
		cout<<-1;
		return 0;
	}
	string s;
	if(n>m){
		n-=1;
		s.pb('0');
	}
	while(n<m && n>0 && m>0){
		s.append("110");
		m-=2;
		n-=1;
	}
	while(n>0 && m>0){
		s.append("10");
		n-=1;
		m-=1;
	}
	if(m==2)
		s.append("11");
	else if(m==1)
		s.append("1");
	cout<<s;
}