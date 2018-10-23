#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,m,temp,mi=100,ma=0,scor;
	cin>>n>>m;
	while(n--){
		cin>>temp;
		if(temp>ma)
			ma=temp;
		if(temp<mi)
			mi=temp;
	}
	scor=max(mi*2,ma);
	while(m--){
		cin>>temp;
		if(temp<=scor){
			cout<<-1;
			return 0;
		}
	}
	cout<<scor;
	return 0;

}