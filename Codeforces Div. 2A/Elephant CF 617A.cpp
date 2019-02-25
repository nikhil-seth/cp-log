#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,ctr=0;
	cin>>n;
	ctr=n/5;
	if(n%5!=0)
		ctr+=1;
	cout<<ctr;
	return 0;
}
