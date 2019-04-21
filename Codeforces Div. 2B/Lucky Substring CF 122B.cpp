#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main(){
	string s;
	cin>>s;
	int c4=0,c7=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='4')
			c4++;
		if(s[i]=='7')
			c7++;
	}
	//cout<<c4<<' '<<c7<<endl;
	if(c4==0 && c7==0)
		cout<<-1;
	else if(c4>=c7)
		cout<<4;
	else
		cout<<7;
}