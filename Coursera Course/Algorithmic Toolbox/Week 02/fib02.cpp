#include<iostream>
using namespace std;
int main(){
	long n;
	cin>>n;
	long arr[n+1];
	arr[0]=0;
	arr[1]=1;
	for(long i=2;i<=n;i++)
		arr[i]=(arr[i-1]+arr[i-2])%10;
	cout<<arr[n];


}