// https://www.codechef.com/problems/GCD2
#include<bits/stdc++.h>
using namespace std;
#define dtype int
long large_mod(string b,long a){
	if(a<=1)
		return 0;
	long ans=0;
	for(long i=0;i<b.length();++i)
		ans=(ans*10+int(b[i]-48))%a;
	return ans;
}
long gcd(long b,long a){
	if(a==0)
		return b;
	else
		return gcd(a,b%a);
}
int main(){
	string b;
	long t;
	long a,x;
	cin>>t;
	while(t--){
		cin>>a>>b;
		if(a==0)
			cout<<b<<"\n";
		else{
			x=large_mod(b,a);
			cout<<gcd(a,x)<<"\n";}
	}
	return 0;
}