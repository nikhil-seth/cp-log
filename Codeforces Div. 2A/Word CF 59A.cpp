#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int u=0,l=0;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]>=97)
			l++;
		else
			u++;
	}
	if(u>l){
		for(int i=0;i<s.length();i++)
			s[i]=toupper(s[i]);
	}
	else{
		for(int i=0;i<s.length();i++)
			s[i]=tolower(s[i]);

	}
	cout<<s;
	return 0;
}