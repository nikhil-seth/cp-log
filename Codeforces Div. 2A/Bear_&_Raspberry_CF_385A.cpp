// Link to problem : http://codeforces.com/problemset/problem/385/A
#include<iostream>
using namespace std;
int main(){
	int n,k,init,sec,min=-32610;
	int t;
	cin>>n>>k;
	cin>>init;
	for(int i=0;i<n-1;i++){
		cin>>sec;
		t=init-sec-k;
		init=sec;
		if(t>min)
			min=t;
	}
	if(min<0)
		cout<<0;
	else
		cout<<min;
	return 0;

}