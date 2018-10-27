#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,q1,q2;
	cin>>n;
	q1=(n/2);
	q2=q1*(q1+1);
	q1=(n+1)/2;
	q2-=q1*q1;
	cout<<q2;
	return 0;
}