#include<bits/stdc++.h>
using namespace std;

int main(){
	long y,k,n,x=0,ctr=0;
	cin>>y>>k>>n;
	if(k>n)
		cout<<-1;
	else{
		int i=1;
		x=k-y;
		while((x+y)<=n){
			i++;
			if(x>0){
				ctr++;
				cout<<x<<' ';
			}
			x=k*i-y;
		}
		if(ctr==0)
			cout<<-1;
	}
	return 0;
}
