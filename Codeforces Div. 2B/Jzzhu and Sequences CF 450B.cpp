#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(long i=(a);i<(b);i++)
using namespace std;
void mod(long &x){
	x=x%1000000007;
	if(x<0)
		x=1000000007+x;
}
long fn(long x,long y,long n){
	mod(x);
	mod(y);
	long z,iter;
	z=y-x;
	mod(z);
	iter=n/3;
	n=n%3;
	if(n==0)
		iter=(pow(-1,iter-1)*z);
	else if(n==1)
		iter=(pow(-1,iter)*x);
	else
		iter=(pow(-1,iter)*y);
	mod(iter);
	return iter;
}
int main(){
	long x,y,n;
	cin>>x>>y>>n;
	cout<<fn(x,y,n);
	return 0;
}