// Link to problem :http://codeforces.com/problemset/problem/479/A
#include<iostream>
#include<algorithm>

using namespace std;
int main(){
	int a,b,c,x;
	cin>>a>>b>>c;
	int result=a+b+c;
	x=(a+b)*c;
	if(result<x)
		result=x;
	x=a*(b+c);
	if(result<x)
		result=x;
	x=a*b*c;
	if(result<x)
		result=x;
	cout<<result;

	return 0;
}
