#include<bits/stdc++.h>
#include<iomanip>
#include<cmath>
#define FOR(a,b,c) for(int i=(a);i<(b);i+=(c))
using namespace std;
#define LL long long

int main(){
	long ctr=0;
	int n,p,q;
	cin>>n;
	while(n--){
		cin>>p>>q;
		if((q-p)>=2)
			++ctr;
		}
	cout<<ctr;
	return 0;
	}
