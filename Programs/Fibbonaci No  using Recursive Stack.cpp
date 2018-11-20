// Fibbonaci No using Recursive Stack
#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
using namespace std;
#define LL long long	
void multiply(int A[2][2],int B[2][2]){
	int C[2][2];
	int i=0,j=0;
	C[0][0]=A[0][0]*B[0][0]+A[0][1]*B[1][0];
	C[0][1]=A[0][0]*B[0][1]+A[0][1]*B[1][1];
	C[1][0]=A[1][0]*B[0][0]+A[1][1]*B[1][0];
	C[1][1]=A[1][0]*B[0][1]+A[1][1]*B[1][1];
	FOR(i,0,1){
		FOR(j,0,1)
		A[i][j]=C[i][j];
	}
}
void power(int arr[2][2],int n){
	if(n==1)
		return ;
	
	multiply(arr,arr);
	n/=2;
	power(arr,n);
}
int fib(int n){
	int F[2][2]={{1,1},{1,0}};
	if(n==0)
		return 0;
	power(F,n);
	return F[0][0];
}
int main(){
	int n;
	cin>>n;
	cout<<fib(n);

	return 0;
	}