// Link to problem : http://codeforces.com/problemset/problem/266/B
#include<iostream>
using namespace std;
int main(){
	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	while(t--){
	for(int i=0;i<s.length()-1;){
		if(s[i]=='B' && s[i+1]=='G'){
			s[i]='G';
			s[i+1]='B';
			i+=2;
		}
		else
			i+=1;
	}
}
cout<<s;
	return 0;
}