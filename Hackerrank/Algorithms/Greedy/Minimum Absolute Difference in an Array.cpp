#include <bits/stdc++.h>
#define LL unsigned long long
using namespace std;
int main(){
	int n;
	cin>>n;
	long arr[n];
	for(auto &x:arr)
		cin>>x;
	sort(arr,arr+n);
	long min_val=LONG_MAX;
	for(int i=1;i<n;i++)
		min_val=min(min_val,abs(arr[i]-arr[i-1]));
	cout<<min_val;
	return 0;
}