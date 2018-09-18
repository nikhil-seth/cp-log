// Link to problem :http://codeforces.com/problemset/problem/451/A
#include<iostream>
using namespace std;
int main(){
	int a,b,i=0;
	cin>>a>>b;
	if(a>b)
		i=b;
	else if(a<=b)
		i=a;
	if(i%2==0)
		cout<<"Malvika";
	else
		cout<<"Akshat";
	return 0;
}
