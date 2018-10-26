// Modular Exponentiation.
#include<bits/stdc++.h>
using namespace std;
long power(int x,int n,int m){
	if(x==0)
		return 0;
	if(n==0)
		return x%m;	
	else if(n%2==0){
		long y=power(x,n/2,m)%m;
		return (y*y)%m;
	}
	else
		return ((x%m)*(power(x,n-1,m)%m))%m;
}
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	cout<<power(a,b,c);
return 0;
}

// Time Complexity : O(logn)