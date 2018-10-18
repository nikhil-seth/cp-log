#include<iostream>
using namespace std;
int main(){
	long long n,q1=-1,q2=-1,t;
	cin>>n;
	long long product;
	while(n--){
		cin>>t;
		if(q1<t){
			q2=q1;
			q1=t;
			//printf("q1%d\nq2%d\n",q1,q2);
		}
		else if(q2<t)
			q2=t;
	}
	product=q1*q2;
	printf("%lld",product);
	return 0;

}