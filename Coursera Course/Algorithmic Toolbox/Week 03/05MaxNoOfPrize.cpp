// Maximum no of prizes
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main(){
	long n,k,i;
	cin>>n;
	for(k=1;k<=n;k++){
		if((k*(k+1))/2>n)
			break;
	}
	cout<<k-1<<endl;
	for(i=1;i<k-1;i++)
		cout<<i<<' ';
	cout<<(n-(i*(i-1)/2));


	return 0;
	
}