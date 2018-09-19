#include<iostream>
using namespace std;

int main(){
	int n,temp,ctrodd=0,ctreven=0,odd,even;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>temp;
		if(temp%2==0){
			++ctreven;
			even=i;
		}
		else {
			++ctrodd;
			odd=i;
		}
	}
	if(ctreven==1)
		cout<<even;
	else
		cout<<odd;
	return 0;
}

