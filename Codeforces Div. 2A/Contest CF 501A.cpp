#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a,b,c,d,q1,q2;
	cin>>a>>b>>c>>d;
	q1=max(((3*a)/10),(a-(a/250)*c));
	q2=max(((3*b)/10),(b-(b/250)*d));
	if(q1>q2)
		cout<<"Misha";
	else if(q1<q2)
		cout<<"Vasya";
	else 
		cout<<"Tie";
	return 0;

}