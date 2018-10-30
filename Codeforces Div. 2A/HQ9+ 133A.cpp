#include<bits/stdc++.h>
#include<iomanip>
#include<cmath>
#define FOR(a,b,c) for(int i=(a);i<(b);i+=(c))
using namespace std;
#define LL long long

int main(){
	string s;
	cin>>s;
	bool flag=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='H' || s[i] == 'Q' || s[i]== '9')
			flag=1;
	}
	if(flag)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
