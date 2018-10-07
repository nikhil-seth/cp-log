// Link to problem : http://codeforces.com/problemset/problem/1/A
#include<iostream>
#include<string>
using namespace std;
int main(){
	long long a,n,m,x,y;
	cin>>n>>m>>a;
	if(n%a)
		x=n/a+1;
	else
		x=n/a;
	if(m%a)
		y=m/a+1;
	else
		y=m/a;
	cout<<x*y;
	

}