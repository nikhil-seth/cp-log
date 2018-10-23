// Prints N terms of Fibbonaci using DP.
#include<bits/stdc++.h>
using namespace std;
void fib(int n){
	int arr[n+1];
	arr[0]=0;
	arr[1]=1;
	for(int i=2;i<=n;i++)
		arr[i]=arr[i-1]+arr[i-2];
	for(int i=1;i<=n;i++)
		cout<<arr[i]<<' ';
	}
int main(){
	int n;
	cin>>n;
	fib(n);

return 0;
}