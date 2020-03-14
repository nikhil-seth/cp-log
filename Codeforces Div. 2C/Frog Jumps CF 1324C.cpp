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
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.length();
		int mval=0,i=n-1,pv=n;
		while(i>=0){
			//cout<<i<<' ';
			while(i>=0 && s[i]!='R')
				i--;
			mval=max(mval,pv-i);
			pv=i;
			i--;
		}
		cout<<mval<<endl;
	}
}
