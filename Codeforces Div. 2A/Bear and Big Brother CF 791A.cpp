#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	int ctr=0;
	while(a<=b){
		ctr++;
		a=a*3;
		b=b*2;
	}
	cout<<ctr;
	return 0;
}