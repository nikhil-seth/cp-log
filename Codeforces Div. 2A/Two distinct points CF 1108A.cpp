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
	int q;
	cin>>q;
	int l1,l2,r1,r2;
	while(q--){
		cin>>l1>>r1>>l2>>r2;
		if(l1==r2)
			r2-=1;
		cout<<l1<<' '<<r2<<endl;
	}
}