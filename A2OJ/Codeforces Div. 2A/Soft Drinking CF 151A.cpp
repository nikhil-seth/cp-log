// Link to problem : http://codeforces.com/problemset/problem/151/A
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, k, l, c, d, p, nl, np,a,b,e;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	a=(k*l)/nl;
	b=c*d;
	e=p/np;
	cout<<min(a,min(b,e))/n;

	return 0;
}