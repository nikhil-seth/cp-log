// Sieve of Eratosthenes
#include<bits/stdc++.h>
using namespace std;
#define dtype int
void Sieve(dtype n){
	bool prime[n+1];
	for(auto &x:prime)
		x=1;
	prime[0]=0;
	prime[1]=0;
	for(dtype x=2;x<=sqrt(n);x++){
		if(prime[x]==1){
			for(dtype j=2;j*x<=n;j+=1)
				prime[x*j]=0;
		}
	}
	for(dtype x=2;x<=n;x++){
		if(prime[x])
			cout<<x<<' ';
	}

}
int main(){
	dtype n;
	cin>>n;
	Sieve(n);
	return 0;
}