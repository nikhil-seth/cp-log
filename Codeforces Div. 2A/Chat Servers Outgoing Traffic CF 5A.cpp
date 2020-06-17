#include<bits/stdc++.h>
#define ll long long
#define UL unsigned long long
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
int posn(string &s){
	for(int i=0;i<s.length();i+=1){
		if(s[i]==':') return i;
	}
	return s.length();
}
int main(){
	fastio
	string s;
	ll ctr,ans;
	ctr=ans=0;
	while(getline(cin,s)){
		if(s[0]=='+')
			ctr+=1;
		else if(s[0]=='-')
			ctr-=1;
		else{
			int x=s.length()-posn(s)-1;
			ans+=ctr*x;
		}
	}
	cout<<ans;
}
