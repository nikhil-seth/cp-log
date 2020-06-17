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
	int t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		string s(n+1,'#');
		vector<int> prefix(n+1);
		s[0]='0';
		prefix[0]=0;
		FOR(i,1,n){
			cin>>s[i];
			prefix[i]=prefix[i-1]+(s[i]-48);
			//cout<<prefix[i]<<' ';
		}
		//cout<<endl;
		int si=0,ans=0;
		FOR(i,1,n){
			if(s[i]=='1')
				si+=1;
			else{
				if(prefix[max(i-k,0)]==si && s[max(i-k,0)]!='1' &&
					prefix[min(i+k,n)]+ans==si && s[min(i+k,n)!='1'])
					ans+=1,s[i]='1',si+=1;
			}
			prefix[i]=si;
		}
		cout<<ans<<endl;
	}
}
 