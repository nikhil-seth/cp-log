#include<iostream>
using namespace std;
long gcd(long a,long b){
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main(){
	long a,b;
	long long t;
	cin>>a>>b;
	//cout<<t<<endl;
	t=(a/gcd(a,b))*b;
	cout<<t;


}