#include<bits/stdc++.h>
using namespace std;

long long chk(long long &a,long long &b,long long &k){
	if(a==b)
		return 1;
	if(b==0)
		return 0;
	if(b==1)
		return a;
	k=a/b;
	a=a-k*b;
	return k+ chk(b,a,k);
	}
int main(){
	long long a,b,t,q;
	cin>>a>>b;
	t=chk(a,b,q);
	cout<<t;

	return 0;
}