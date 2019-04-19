#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main(){
	int t;
	LL a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		if(a>b)
			cout<<'>';
		else if(a<b)
			cout<<'<';
		else
			cout<<'=';
		cout<<endl;
	}
}