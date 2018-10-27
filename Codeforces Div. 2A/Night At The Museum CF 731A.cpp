#include<bits/stdc++.h>
using namespace std;
//96
int main(){
	long long n=0;
	int init=1,final,q;
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
		final=int(s[i]-96);
		if(init<final)
			q=26-final+init;
		else
			q=26+final-init;
		n+=min(abs(final-init),abs(q));
		init=final;
	}
	cout<<n;


	return 0;
}