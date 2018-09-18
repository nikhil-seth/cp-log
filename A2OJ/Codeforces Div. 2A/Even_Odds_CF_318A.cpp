// Link to problem :http://codeforces.com/problemset/problem/318/A
#include<iostream>
#include<set>

using namespace std;
int main(){
	long long n,k;
	cin>>n>>k;
	if(k>(n+1)/2){
		k-=(n+1)/2;
		cout<<2*k;
	}
	else
		cout<<(2*k-1);

	return 0;
}
