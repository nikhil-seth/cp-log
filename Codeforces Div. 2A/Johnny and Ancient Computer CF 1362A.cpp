#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define elif else if
#define pb push_back
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define mp(a,b) make_pair(a,b)
#define mms(a) memset(a,0,sizeof(a))
using namespace std;
int main(){
	fastio
	int t;
	ul a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		if(a>b)
			swap(a,b);
		if(b%a!=0)
			cout<<-1;
		else{
			b/=a;
			ul ctr= __builtin_popcount(b);
			if(ctr>1)
				cout<<-1;
			else{
				cout<<ceil(log2(b)/double(3));
			}
		}
		cout<<endl;
	}
}