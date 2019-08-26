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
	fastio
	//fio
	int t;
	cin>>t;
	int b,p,f;
	int h,c;
	while(t--){
		cin>>b>>p>>f>>h>>c;
		int tb=min(b/2,f+p);
		// These much min burgers can be made.
		long mv=0;
		for(int i=0;i<=tb;i++){
			if(i<=p && (tb-i)<=f){
				long x=i*h+c*(tb-i);
				mv=max(mv,x);
			}
		}
		cout<<mv<<endl;
	}
}