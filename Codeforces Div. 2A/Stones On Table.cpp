#include<iostream>
using namespace std;
int main(){
	int n,ctr=0;
	char s,t;
	cin>>n;
	cin>>s;
	while((n-1)>0){
		cin>>t;
		if(t==s)
			++ctr;
		else
		s=t;
		--n;
	}
	cout<<ctr;
	return 0;
}