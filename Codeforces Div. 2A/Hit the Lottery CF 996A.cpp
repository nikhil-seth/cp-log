#include <bits/stdc++.h>
#define LL unsigned long long
using namespace std;

int main(){
	long n;
	cin>>n;
	long ctr=0;
	ctr=n/100;
	n=n%100;
	ctr+=n/20;
	n=n%20;
	ctr+=n/10;
	n=n%10;
	ctr+=n/5;
	n=n%5;
	ctr+=n;
	cout<<ctr;
	return 0;
}

	
	