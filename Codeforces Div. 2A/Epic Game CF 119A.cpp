#include<bits/stdc++.h>
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define ll long long
using namespace std;
int main(){
	fastio
	//fio
	int a[2],i,n;
	cin>>a[0]>>a[1]>>n;
	i=0;
	while(n>0){
		n=n-__gcd(n,a[i]);
		i=1-i;
	}
	cout<<1-i;
}