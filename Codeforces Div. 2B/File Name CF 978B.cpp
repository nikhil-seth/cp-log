#include <bits/stdc++.h>
#define LL unsigned long long
using namespace std;
int main(){
	int n;
	string s;
	cin>>n>>s;
	int ctr=0;
	for(int i=0;i<n-2;i++){
		if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x')
			ctr++;
	}
	cout<<ctr;
	return 0;
}