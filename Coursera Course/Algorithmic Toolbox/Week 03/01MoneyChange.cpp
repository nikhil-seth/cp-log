// Money Change
#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,ctr=0;
	cin>>m;	
	ctr+=(m/10);
	m%=10;
	ctr+=(m/5);
	m%=5;
	ctr+=m;
	cout<<ctr;
	return 0;
}