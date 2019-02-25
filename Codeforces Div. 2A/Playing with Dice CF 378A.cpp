// Link to problem : http://codeforces.com/problemset/problem/151/A
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int a,b,e=0,ctra=0,ctrb=0;
	cin>>a>>b;
	for(int i=1;i<=6;i++){
		if(abs(i-a)>abs(i-b))
			++ctrb;
		else if(abs(i-a)<abs(i-b))
			++ctra;
		else
			e++;
	}
	cout<<ctra<<' '<<e<<' '<<ctrb;

	return 0;
}