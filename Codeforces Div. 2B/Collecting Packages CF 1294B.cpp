#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
using namespace std;
string fn(pair<int,int> p[],int n){
	int x=0,y=0;
	string s;
	for(int i=0;i<n;i++){
		while(p[i].first>x){
			x++;
			s.pb('R');
		}
		while(p[i].second>y){
			y++;
			s.pb('U');
		}
	}
	return s;
}
int main(){
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int t,n,xi,yi;
	cin>>t;
	while(t--){
		cin>>n;
		pair<int,int> p[n];
		FOR(i,0,n-1){
			cin>>p[i].first>>p[i].second;
		}
		sort(p,p+n);
		int mp=0;
		FOR(i,0,n-1){
			if(p[i].second>=mp)
				mp=max(mp,p[i].second);
			else{
				mp=-1;
				break;
			}
		}
		if(mp==-1)
			cout<<"NO\n";
		else{
			cout<<"YES\n";
			string s=fn(p,n);
			cout<<s<<endl;
		}
	}
}