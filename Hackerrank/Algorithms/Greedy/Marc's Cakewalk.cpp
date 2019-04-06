#include <bits/stdc++.h>
#define LL unsigned long long
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(auto &x:arr)
		cin>>x;
	long miles=0;
	sort(arr,arr+n);
	int j=0;
	for(int i=n-1;i>=0;i--,j++)
		miles+=pow(2,j)*arr[i];
	cout<<miles;
	return 0;
}