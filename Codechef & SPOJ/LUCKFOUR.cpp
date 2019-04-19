#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int chk(string s){
	int ctr=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='4')
			ctr++;
	}
	return ctr;
}

int main(){
	int t;
	string s;
	cin>>t;
	while(t--){
		cin>>s;
		cout<<chk(s)<<endl;
	}
	return 0;
}
