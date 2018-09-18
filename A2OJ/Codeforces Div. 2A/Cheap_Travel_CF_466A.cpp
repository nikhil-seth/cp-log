// Link to problem :http://codeforces.com/problemset/problem/466/A
#include<iostream>
using namespace std;
int main(){
	int n,m,a,b;
	long cost;
	cin>>n>>m>>a>>b;
	if(m*a<=b)
		cost=n*a;
	else{
		int remain = (n % m) * a;
		if(remain>b)
			cost=(n/m)*b+b;
		else
			cost=(n/m)*b+remain;
	}
	cout<<cost;
	return 0;
}
