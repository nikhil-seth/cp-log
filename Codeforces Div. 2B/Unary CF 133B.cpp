#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main(){
	string s,s2;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]=='>')
			s2.append("1000");
		if(s[i]=='<')
			s2.append("1001");
		if(s[i]=='+')
			s2.append("1010");
		if(s[i]=='-')
			s2.append("1011");
		if(s[i]=='.')
			s2.append("1100");
		if(s[i]==',')
			s2.append("1101");
		if(s[i]=='[')
			s2.append("1110");
		if(s[i]==']')
			s2.append("1111");
	}
	LL sum=0,k=1;
	//cout<<s<<endl;
	for(int i=s2.length()-1,j=0;i>=0;i--,j++){
		sum=(sum+k*(s2[i]-48))%1000003;
		k=(k*2)%1000003;
		//)%1000003)%1000003;
	}
	cout<<sum;
}