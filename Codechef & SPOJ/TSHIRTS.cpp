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
#define mod 1000000007
using namespace std;
ll dp[1<<10][2];
ll calc;
bool chk(ll i,const ll &x){
	return (x&(1<<i))!=0;
}
ll setx(ll i,const ll &x){
	return (x|(1<<i));
}

int main(){
	fastio
	ll t,n;
	cin>>t;
	string s;
	while(t--){
		cin>>n;
		bool arr[n][101];
		mms(arr);
		getline(cin,s);
		FOR(i,0,n-1){
			getline(cin,s);
			for(int j=0;j<s.length();j+=1){
				if(isdigit(s[j])){
					int no=0;
					while(j<s.length() && isdigit(s[j]))
						no=no*10+s[j++]-'0';
					j-=1;
					arr[i][no]=1;
				}
			}
		}
		calc=(1<<n)-1;
		mms(dp);
		ll temp;
		dp[calc][1]=1;
		for(int j=100;j>0;j-=1){
			FOR(i,0,calc){
				dp[i][j%2]=dp[i][(j+1)%2];
				FOR(k,0,n-1){
					if(arr[k][j] && !chk(k,i)){
						temp=setx(k,i);
						dp[i][j%2]+=dp[temp][(j+1)%2];
						dp[i][j%2]%=mod;
					}
				}
				//cout<<dp[i][j%2]<<' ';
			}
			//cout<<endl;
		}
		cout<<dp[0][1]<<endl;
	}
}