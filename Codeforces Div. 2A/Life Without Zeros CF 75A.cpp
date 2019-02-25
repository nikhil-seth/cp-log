#include<bits/stdc++.h>
using namespace std;
long zero_rem(long a){
	long b=0;
	long i=1;
	while(a){
		int c=(a%10);
		if(c){
			long p=c*i;
			i*=10;
			b+=p;
		}
		a=a/10;
	}
	return b;
}
int main(){
	long a,b,c,d;
	cin>>a>>b;
	c=a+b;
	a=zero_rem(a);
	b=zero_rem(b);
	c=zero_rem(c);
	d=a+b;
	//cout<<a<<b<<endl;
	if(c==d)
		cout<<"YES";
	else
		cout<<"NO";

}
