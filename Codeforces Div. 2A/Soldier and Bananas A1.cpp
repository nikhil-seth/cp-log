#include<iostream>
using namespace std;
int main(){
	long long n,t;
	int w,k;
	cin>>k>>n>>w;
	t=(w*(w+1)*k)/2;
	if(n<t)
		cout<<t-n;
	else
		cout<<0;
	return 0;

}
