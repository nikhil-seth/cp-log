#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define ld unsigned long
using namespace std;

int main(){
	fastio
	//fio
	int n,m;
	cin>>n>>m;
	int ctr=0;
	if(n<m)
		cout<<n;
	else{
		while(n>=m){
			ctr+=m;
			n-=m;
			n+=1;
		}
		ctr+=n;
		cout<<ctr;
	}
}