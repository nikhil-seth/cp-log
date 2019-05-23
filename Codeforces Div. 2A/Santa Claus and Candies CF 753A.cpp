#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
using namespace std;
int main(){
	fastio
	//fio
	int n;
	cin>>n;
	int t,p=ceil((ceil(sqrt(8*n+1))-1)/2);
	t=p*(p+1)/2;
	t-=n;
	if(t==0){
		cout<<p<<endl;
		FOR(i,1,p)
			cout<<i<<' ';
	}
	else{
		while(t>p){
			t-=p;
			p-=1;
		}
		cout<<p-1<<endl;
		FOR(i,1,p){
			if(i==t)
				continue;
			cout<<i<<' ';
		}
	}
}
