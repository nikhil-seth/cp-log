#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int x[101],y[101];
	for(auto &t:x)
		t=0;
	for(auto &t:y)
		t=0;
	int a,b;
	while(n--){
		cin>>a>>b;
		x[a]++;
		y[b]++;
	}
	int ctrx=0,ctry=0;
	for(auto &t:x){
		if(t>0)
			ctrx++;
	}
	for(auto &t:y){
		if(t>0)
			ctry++;
	}
	//cout<<ctrx<<' '<<ctry<<endl;
	cout<<min(ctrx,ctry);
	return 0;
}