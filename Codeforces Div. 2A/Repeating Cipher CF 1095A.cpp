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
	string s;
	cin>>s;
	int j=2;
	for(int i=0;i<n;j++){
		cout<<s[i];
		i+=j;
	}
	return 0;
}