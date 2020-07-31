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
	ll t;
	cin>>t;
	string s;
	while(t--){
		cin>>s;
		ll ans=0;
		FOR(i,0,9){
			FOR(j,0,9){
				ll ctr=0;
				FOR(k,0,s.length()-1){
					if(ctr & 1){
						if(s[k]-48==i) ctr+=1;
					}
					else{
						if(s[k]-48==j) ctr+=1;
					}
				}
				if(i!=j)
					ctr=ctr-(ctr%2); // odd toh even kardiya
				ans=max(ans,ctr);
			}
		}
		cout<<s.length()-ans<<endl;
	}
}