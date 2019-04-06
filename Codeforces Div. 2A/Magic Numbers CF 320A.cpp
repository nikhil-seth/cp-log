#include <bits/stdc++.h>
#define LL unsigned long long
using namespace std;
int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.length();){
		if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4')
			i=i+3;
		else if(s[i]=='1' && s[i+1]=='4')
			i=i+2;
		else if(s[i]=='1')
			i+=1;
		else{
			cout<<"NO";
			return 0;
		}

	}
	cout<<"YES";
	return 0;
}