#include<bits/stdc++.h>
using namespace std;

int main(){
	long n;
	cin>>n;
	long a[n],b[n];
	for(auto &x:a)
		cin>>x;
	for(auto &x:b)
		cin>>x;
	sort(a,a+n);
	sort(b,b+n);
	long long sum=0;
	for(long i=0;i<n;i++)
		sum+=(a[i]*b[i]);
	cout<<sum;

	return 0;
}
