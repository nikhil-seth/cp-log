#include<bits/stdc++.h>
using namespace std;
int main(){
	long long l,k,i=0;
	cin>>k>>l;
	while(l%k==0 && l!=1){
		l=l/k;
		i++;
	}
	if(l!=1)
		cout<<"NO";
	else 
		cout<<"YES\n"<<i-1;
return 0;
}