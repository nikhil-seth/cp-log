#include <bits/stdc++.h>
#define LL unsigned long long
using namespace std;

int main(){
	int n,k,l,t;
	cin>>n>>k;
	long luck=0;
	vector<int> ic;
	while(n--){
		cin>>l>>t;
		if(t==1)
			ic.push_back(l);
		else
			luck+=abs(l);
	}
	sort(ic.begin(),ic.end());
	t=ic.size()-1;
	while(k-- && t>=0)
		luck+=ic[t--];
	while(t>=0)
		luck-=ic[t--];
	cout<<luck;
	return 0;
}