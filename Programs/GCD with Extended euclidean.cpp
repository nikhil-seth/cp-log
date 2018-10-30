// GCD with Extended Euclidean
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b,int &x,int &y){
	//printf("GCD a:%d\tb:%d\t",a,b);
	if(b==0){
		x=1;
		y=0;
		return a;
	}
	else{
		int x1,y1;
		int k=gcd(b,a%b,x1,y1);
		y=x1-(a/b)*y1;
		x=y1;
		return k;
	}
}
int main(){
	int a,b,x,y;
	cin>>a>>b;
	cout<<gcd(a,b,x,y)<<endl;
	cout<<x<<endl<<y;
	return 0;
}
