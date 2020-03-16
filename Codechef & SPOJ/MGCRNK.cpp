#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
#define mp(a,b) make_pair(a,b)
#define pi pair<int,int>
#define mms(a) memset(a,0,sizeof(a))
using namespace std;
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int t,n;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[n][n];
		FOR(i,0,n-1){
			FOR(j,0,n-1)
				cin>>s[i][j];
		}
		for(int i=n-1;i>=0;i--){
			for(int j=n-1;j>=0;j--){
				int temp=0;
				if(i==n-1 && j==n-1)
					continue;
				else if(i==n-1)
					temp=s[i][j+1];
				else if(j==n-1)
					temp=s[i+1][j];
				else
					temp=max(s[i][j+1],s[i+1][j]);
				s[i][j]+=temp;
			}
		}
		double d=s[0][0];
		if(d<0)
			cout<<"Bad Judges\n";
		else{
			d/=(2*n-3);
			cout<<fixed<<setprecision(6)<<d<<endl;
		}
	}
}