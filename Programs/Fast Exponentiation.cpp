// Fast Exponentiation.
#include<bits/stdc++.h>
using namespace std;
long power(int x,int n){
	if(x==0)
		return 0;
	if(n==0)
		return 1;
	else if(n%2==0){
		long y=power(x,n/2);
		return y*y;
	}
	else
		return x*power(x,n-1);
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<power(a,b);
return 0;
}

// Time Complexity : O(logn)