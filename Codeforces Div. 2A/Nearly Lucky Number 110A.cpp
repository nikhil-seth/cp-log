#include<bits/stdc++.h>
#include<iomanip>
#include<cmath>
#define FOR(a,b,c) for(int i=(a);i<(b);i+=(c))
using namespace std;
#define LL long long	
bool lucky(long n){
	if(n==0)
		return 0;
	while(n!=0){
		if((n%10)!=7 && (n%10)!=4){
			return 0;
		}
		n/=10;
	}
	return 1;
}
int main(){
	string s;
	cin>>s;
	long ctr=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='4' || s[i]=='7')
			++ctr;
	}
	if(lucky(ctr))
		cout<<"YES";
	else
		cout<<"NO";
}