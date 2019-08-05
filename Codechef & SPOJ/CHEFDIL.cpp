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
bool fn(string &s,int l,int r){
	if(l>r)
		return 1;
	if(l==r)// One Element.
		return s[l]-48;
	if(l==r-1){
		// 2 Elements.
		if(s[l]==s[r])
			return 0;
		return 1;
	}
	int i=l;
	for(;i<=r;i++){
		if(s[i]=='1')
			break;
	}
	if(i-1==r)
		return 0;
	if(i>l)
		s[i-1]=97-s[i-1];
	if(i<r)
		s[i+1]=97-s[i+1];
	return fn(s,l,i-1) && fn(s,i+1,r);
}
int main(){
	fastio
	fio
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(fn(s,0,s.length()-1))
			cout<<"WIN";
		else
			cout<<"LOSE";
		cout<<endl;
	}
}