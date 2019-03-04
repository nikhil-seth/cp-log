#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,h;
	cin>>n>>h;
	int ctr=0,t;
	while(n--){
		cin>>t;
		if(t>h)
			ctr+=1;
		ctr++;
	}
	cout<<ctr;
	return 0;
}
