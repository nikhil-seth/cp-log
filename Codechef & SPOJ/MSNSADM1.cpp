#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
#define M 100
using namespace std;
int main(){
	fastio
	fio
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int res[n];
		FORA(x,res)
			cin>>x;
		int temp,mval=0;
		FOR(i,0,n-1){
			cin>>temp;
			res[i]=max(res[i]*20-temp*10,0);
			mval=max(mval,res[i]);
		}
		cout<<mval<<endl;
	}
}