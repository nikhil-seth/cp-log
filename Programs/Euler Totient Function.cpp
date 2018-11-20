// Euler Totient Function
// Totient Function : Function which returns count of prime divisors which are relatively prime to n
#include<bits/stdc++.h>
#include<iomanip>
#include<cmath>
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
using namespace std;
#define LL long long	
int primeDiv(int arr[],int n){
	int ctr=0;
	if(n%2==0){
		arr[ctr++]=2;
		while(n%2==0)
			n/=2;
	}
	for(int i=3;i<=sqrt(n);i+=2){
		if(n%i==0){
			arr[ctr++]=i;
			while(n%i==0)
				n/=i;
		}
	}
	if(n>2)
		arr[ctr++]=n;
	return ctr;
}
LL totient(int n){
	LL result=n;
	int arr[n+1];
	int ctr=primeDiv(arr,n);
	for(int i=0;i<ctr;i++)
		result=result*(arr[i]-1)/arr[i];
	return result;
}
int main(){
	int n;
	while(1){
	cin>>n;
	cout<<totient(n);}

}


/* Properties :
1-For prime no p ?(p)=p-1
2-2 nos a&b , if gcd(a,b)=1 then ?(ab)=?(a)*?(b)
3-For any two prime numbers p and q, ?(pq) = (p-1)*(q-1). This property is used in RSA algorithm.
4-If p is a prime number, then ?(p^k) = p^k – p^k-1. This can be proved using Euler’s product formula.
5) Sum of values of totient functions of all divisors of n is equal to n.
gausss
For example, n = 6, the divisors of n are 1, 2, 3 and 6. According to Gauss, sum of ?(1) + ?(2) + ?(3) + ?(6) should be 6. We can verify the same by putting values, we get (1 + 1 + 2 + 2) = 6.
6) The most famous and important feature is expressed in Euler’s theorem :
	The theorem states that if n and a are coprime
	(or relatively prime) positive integers, then

	a?^(n) ? 1 (mod n) 