#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define ld long double
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
	ul a,b,x;
	cin>>a>>b;
	while(a && b){
		//cout<<a<<' '<<b<<endl;
		if(a>=2*b){
			x=floor((long double)(a)/(2*b));
			//cout<<x<<endl;
			a-=(ul)(2)*b*x;
		}
		else if(b>=2*a){
			x=floor((long double)(b)/(2*a));
			b-=(ul)(2)*a*x;
		}
		else
			break;
	}
	cout<<a<<' '<<b<<endl;
}
