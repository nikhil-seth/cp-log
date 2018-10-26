// Finding modulus of a very large no
#include<bits/stdc++.h>
using namespace std;
#define dtype int
long large_mod(string s,long n){
	if(n<=1)
		return 0;
	long ans=0;
	for(int i=0;i<s.length();++i)
		ans=(ans*10+int(s[i]-48))%n;
	return ans;
}
int main(){
	long x=pow(10,9)+7,p;
	string s1,s2,s3;
	int k;
	long a[3];
	cin>>k;
	while(k--){
		cin>>s1>>s2>>s3;
		a[0]=large_mod(s1,x);
		a[1]=large_mod(s2,x);
		a[2]=large_mod(s3,x);
		sort(a,a+3);
		a[0]=(a[0]*(a[1]-1))%x;
		a[2]=(a[0]*(a[2]-2))%x;
		cout<<a[2]<<"\n";}
	return 0;
}