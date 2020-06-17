#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
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
	ul a,b,x,y,ctr=0;
	cin>>a>>b;
	while(a!=1 && b!=1){
		if(a>b){
			x=a/b;
			ctr+=x;
			a-=(x*b);
		}
		else
			swap(a,b);
	}
	if(a!=1 && b!=1)
		ctr+=1;
	else if(a!=1) ctr+=a;
	else ctr+=b;
	cout<<ctr<<endl;
}
