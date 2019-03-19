#include<bits/stdc++.h>
using namespace std;
int main(){
	long n,m,o;
	int ctr=0;
	cin>>n>>m;
	if(m%n!=0)
		cout<<-1;
	else{
		o=m/n;
		
			while(o%3==0){
				o/=3;
				ctr++;
			}
			while(o%2==0){
				o/=2;
				ctr++;
			}
			if(o==1)
				cout<<ctr;
			else
				cout<<-1;
	
	}
	return 0;
}