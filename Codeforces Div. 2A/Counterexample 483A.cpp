// Link to problem :http://codeforces.com/problemset/problem/483/A
#include<iostream>
using namespace std;
int main(){
	long long int l,r;
	cin>>l>>r;
	if((r-l+1)<3){
		cout<<-1;
		return 0;
	}
	else if((r-l+1)==3){
		if(l%2==0)
			cout<<l<<' '<<l+1<<' '<<r;
		else
			cout<<-1;
		return 0;
	}
	else{
		if(l%2==0)
			cout<<l<<' '<<l+1<<' '<<l+2;
		else
			cout<<l+1<<' '<<l+2<<' '<<l+3;
	}
	return 0;
	
}