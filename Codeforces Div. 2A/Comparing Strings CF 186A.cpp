#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
	cin>>s1>>s2;
	int ctr=0,c[2];
	if(s1.length()!=s2.length())
		goto l;
	for(int i=0;i<s1.length();i++){
		if(s1[i]==s2[i])
			continue;
		if(ctr==2)
			goto l;
		else
			c[ctr++]=i;
	}
	if(ctr!=1 && s1[c[0]]==s2[c[1]] && s1[c[1]]==s2[c[0]])
		cout<<"YES";
	else
		goto l;
	return 0;
	l:
	cout<<"NO";
	return 0;
}