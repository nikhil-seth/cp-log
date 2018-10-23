#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
	int n=0;
	cin>>s1;
	cin>>s2;
	for(int i=0;i<s2.length();i++){
		if(s2[i]==s1[n])
			++n;
	}
	cout<<n+1;
	return 0;
}