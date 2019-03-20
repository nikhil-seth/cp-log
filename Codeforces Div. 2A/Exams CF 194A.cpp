#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int p=k-n*2;
	if(p>=n)
		cout<<0;
	else if(p==0)
		cout<<n;
	else
		cout<<n-p;
}
