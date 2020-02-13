// Finding Prime Divisors using O(sqrt(n))
#include<bits/stdc++.h>
using namespace std;
void prime_div(int n){
	int arr[100];
	int ctr=0;
	while(n%2==0){
		arr[ctr++]=2;
		n/=2;
	}
	for(int i=3;i<=sqrt(n);i+=2){
		while(n%i==0){
			arr[ctr++]=i;
			n/=i;
		}
	}
	if(n>2)
		arr[ctr++]=n;
	for(int i=0;i<ctr;i++)
		cout<<arr[i]<<' ';
}
int main(){
	int n;
	cin>>n;
	prime_div(n);
	return 0;
}
// Time Complexity : O(sqrt(n))
