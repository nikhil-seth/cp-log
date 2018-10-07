// Link to problem : http://codeforces.com/problemset/problem/1060/A
#include<iostream>
using namespace std;
int main(){
	int n,ctr=0;
	cin>>n;
	string s;
	cin>>s;
	if(n<11){
		cout<<0;
	}
	else{
		for(int i=0;i<n;i++){
			if(s[i]=='8')
				++ctr;
		}
		int i;
		for(i=0;i<ctr && n>10;i++){
			n-=11;
		}
		cout<<i;
	}
	return 0;
}