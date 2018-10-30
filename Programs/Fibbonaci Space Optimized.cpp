//Space Optimized Fibbonaci
#include<bits/stdc++.h>
using namespace std;
int fib(int a){
	int x1,x2,t,q;
	x1=0;
	x2=1;
	for(int i=2;i<=a;i++){
		t=x1+x2;
		x1=x2;
		x2=t;}
	return t;
}
int main(){
	int n;
	cin>>n;
	cout<<fib(n);
	return 0;
}