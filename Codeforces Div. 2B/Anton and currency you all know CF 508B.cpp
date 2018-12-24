#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
using namespace std;

int main(){
	string s;
	cin>>s;
	int p=-1,n,j=s.size();
	n=s[s.length()-1]-48;
	for(int i=s.length()-1;i>=0;i--){
		int t=(s[i]-48);
		if(t%2==0 && (t<=n || p==-1)){
			p=t;
			j=i;
		}
	}
	if(j==s.size())
		cout<<-1;
	else{
		s[j]=s[s.length()-1];
		s[s.length()-1]=(p+48);
		cout<<s;
	}
	return 0;
}
