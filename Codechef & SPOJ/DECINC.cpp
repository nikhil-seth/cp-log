#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main(){
	int n;
	cin>>n;
	if(n%4==0)
		cout<<n+1;
	else
		cout<<n-1;
}