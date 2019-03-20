#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,lc=0,rc=0;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0;i<n;i++){
		if(s[i]=='L')
			lc++;
		else if(s[i]=='R')
			rc++;
	}
	int i=-1;
	if(rc==0){
		for(i=0;i<n;i++){
			if(s[i]=='L')
				break;
		}
		cout<<i+lc<<' '<<i;
	}
	else {
		for(i=0;i<n;i++){
			if(s[i]=='R')
				break;
		}
		//cout<<rc;
		if(lc==0)
			cout<<i+1<<' '<<i+rc+1;
		else
			cout<<i+1<<' '<<i+rc;

	}
	return 0;
}
