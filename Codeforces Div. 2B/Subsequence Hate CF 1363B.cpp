#include<bits/stdc++.h>
#define ll long long
#define UL unsigned long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define elif else if
#define pb push_back
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define mp(a,b) make_pair(a,b)
#define mms(a) memset(a,0,sizeof(a))
using namespace std;
int main(){
	fastio
	int t,n;
	cin>>t;
	string s;
	while(t--){
		cin>>s;
		n=s.length();
		int z[n][2],o[n][2];
		mms(z);
		mms(o);
		if(s[0]=='0')
			z[0][0]=0,o[0][0]=1;
		else
			z[0][0]=1,o[0][0]=0;
		FOR(i,1,n-1){
			z[i][0]=z[i-1][0],o[i][0]=o[i-1][0];
			if(s[i]!='0')
				z[i][0]+=1;
			else
				o[i][0]+=1;
		}
		if(s[n-1]=='0')
			o[n-1][1]=1,z[n-1][1]=0;
		else
			o[n-1][1]=0,z[n-1][1]=1;
		for(int i=n-2;i>=0;i-=1){
			z[i][1]=z[i+1][1],o[i][1]=o[i+1][1];
			if(s[i]!='0')
				z[i][1]+=1;
			else
				o[i][1]+=1;
		}
		int ans=n;
		for(int i=0;i<n;i+=1){
			ans=min(ans,min(z[i][0]+o[i][1],z[i][1]+o[i][0]));
		}
		cout<<ans-1<<endl;
	}
}