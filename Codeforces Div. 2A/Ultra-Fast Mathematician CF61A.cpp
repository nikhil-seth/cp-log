#include<bits/stdc++.h>
#define LL long long
using namespace std;
//ios_base::sync_with_stdio(false);
int main(){
	string s1,s2;
	cin>>s1>>s2;
	for(int i=0;i<s1.length();i++){
		if(s1[i]==s2[i])
			cout<<'0';
		else
			cout<<'1';
	}
}