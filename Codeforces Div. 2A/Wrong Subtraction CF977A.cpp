// Find Optimum operation
// Link : https://practice.geeksforgeeks.org/problems/find-optimum-operation/0
#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
using namespace std;

int main(){
	long n,k;
	cin>>n>>k;
	while(k>0){
		if(n%10==0){
			n/=10;
			k-=1;
		}
		if(k<=n%10){
			n-=k;
			k=0;
		}
		else if(k>n%10){
			k-=(n%10);
			n=n-n%10;
		}
	}
	cout<<n;
	return 0;
}