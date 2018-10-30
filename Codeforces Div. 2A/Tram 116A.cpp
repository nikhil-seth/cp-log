#include<bits/stdc++.h>
#include<iomanip>
#include<cmath>
#define FOR(a,b,c) for(int i=(a);i<(b);i+=(c))
using namespace std;
#define LL long long

int main(){
	int n,a,b;
	long x=0,t=0;
	cin>>n;
	while(n--){
		cin>>a>>b;
		x-=a;
		t=max(t,x+b);
		x+=b;
	}
	cout<<t;
}
