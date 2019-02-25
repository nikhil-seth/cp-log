#include<bits/stdc++.h>
#include<iomanip>
#include<cmath>
#define FOR(a,b,c) for(int i=(a);i<(b);i+=(c))
using namespace std;
#define LL long long

int main(){
	string s,s1;
	cin>>s;
	bool flag=1;
	for(int i=1;i<s.length();i++){
		if(!isupper(s[i])){
			cout<<s;
			return 0;
		}
	}	
	for(int i=0;i<s.length();i++){
		if(isupper(s[i]))
			s[i]=tolower(s[i]);
		else if(islower(s[i]))
			s[i]=toupper(s[i]);
	}
	cout<<s;
	return 0;
		}
