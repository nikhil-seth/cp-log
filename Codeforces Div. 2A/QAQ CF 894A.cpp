#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
using namespace std;

int main(){
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	string s;
	cin>>s;
	int n=s.length();
	pair<vector<int>,int> v[n];
	int ctr=0;
	if(s[n-1]=='A'){
		v[n-1].first.pb(n-1);
		v[n-1].second=0;
	}
	else if(s[n-1]=='Q'){
		ctr=1;
		v[n-1].first={};
		v[n-1].second=1;
	}
	else{
		v[n-1].first={};
		v[n-1].second=0;
	}
	for(int i=n-2;i>=0;i--){
		if(s[i]=='Q')
			ctr++;
		v[i].first=v[i+1].first;
		v[i].second=ctr;		
		if(s[i]=='A')
			v[i].first.pb(i);
	}
	LL res=0;
	for(int i=0;i<s.length()-1;i++){
		if(s[i]=='Q'){
			for(int j=0;j<v[i].first.size();j++){
				res+=v[v[i].first[j]].second;
			}
		}
	}
	cout<<res;
}
