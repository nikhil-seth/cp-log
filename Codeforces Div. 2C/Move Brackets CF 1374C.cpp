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
	ll t,n;
	cin>>t;
	while(t--){
		cin>>n;
		string s;
		cin>>s;
		ll ob,ctr;
		ob=ctr=0;
		FOR(i,0,n-1){
			if(s[i]=='(')
				ob+=1;
			else{
				if(ob)
					ob-=1;
				else
					ctr+=1;
			}
		}
		cout<<ctr<<endl;
	}
}