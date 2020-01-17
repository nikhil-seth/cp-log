#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int n,m,k;
	cin>>n>>m>>k;
	bool f=1,l=0;
	vector<int> v;
	FOR(i,0,n-1){
		if(f==1){
			for(int j=0;j<m;j++){
				if(k>1 && !l){
					l=1;
					cout<<2<<' '<<i+1<<' '<<j+1;
				}
				else if(k>1 && l){
					l=0;
					k--;
					cout<<' '<<i+1<<' '<<j+1<<endl;
				}
				else{
					v.pb(i+1);
					v.pb(j+1);
				}
			}
			f=0;
		}
		else{
			for(int j=m-1;j>=0;j--){
				if(k>1 && !l){
					l=1;
					cout<<2<<' '<<i+1<<' '<<j+1;
				}
				else if(k>1 && l){
					l=0;
					k--;
					cout<<' '<<i+1<<' '<<j+1<<endl;
				}
				else{
					v.pb(i+1);
					v.pb(j+1);
				}
			}
			f=1;
		}
	}
	cout<<v.size()/2<<' ';
	FORA(x,v)
		cout<<x<<' ';
}