#include <bits/stdc++.h>
#define LL unsigned long long
using namespace std;
int main(){
	int d,st;
	cin>>d>>st;
	int maxt[d],mint[d],summax=0,summin=0;
	for(int i=0;i<d;i++){
		cin>>mint[i]>>maxt[i];
		summax+=maxt[i];
		summin+=mint[i];
	}
	if(summax<st || summin>st){
		cout<<"NO";
		return 0;
	}
	st-=summin;
	for(int i=0;i<d && st>0;i++){
		if(maxt[i]-mint[i]>=st){
			mint[i]+=st;
			st=0;
		}
		else{
			st-=(maxt[i]-mint[i]);
			mint[i]=maxt[i];
		}
	}
	cout<<"YES\n";
	for(auto &x:mint)
		cout<<x<<' ';
	return 0;
}
