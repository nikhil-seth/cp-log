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
	cin>>a>>b;
	cout<<gcd(a,b);


}