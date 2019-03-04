#include<bits/stdc++.h>
using namespace std;

int main(){
	long n,m,t,li,ri,v;
    ios_base::sync_with_stdio(false);

	cin>>n>>m;
   	long cpos=0,cneg=0;
	for(auto i=0;i<n;i++){
		cin>>t;
		if(t==1)
			++cpos;
		else
			++cneg;
	}
	cpos=min(cpos,cneg);
	while(m--){
		cin>>li>>ri;
		v=ri-li+1;
		if(v%2!=0 || cpos<(v/2))
			cout<<0;
		else
			cout<<1;
		cout<<endl;
		}
	return 0;
}