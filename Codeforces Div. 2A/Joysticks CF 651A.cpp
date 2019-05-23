#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
using namespace std;
LL dp(int a, int b){
	if(a==0 || b==0)
		return 0;
	if(a==1 && b==1)
		return 0;
	if(a>=b)
		return 1 + dp(a-2,b+1);
	else
		return 1 + dp(a+1,b-2);
}
int main(){
	fastio
	//fio
	int a,b;
	cin>>a>>b;
	cout<<dp(a,b);
	return 0;
} 