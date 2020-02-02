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
#define ld long double
using namespace std;
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int n;
	cin>>n;
	ll s[n],c[n];
	FORA(x,s)
		cin>>x;
	FORA(x,c)
		cin>>x;
	ll min_cost=1e15;
	FOR(j,1,n-2){
		int idx1=-1;
		FOR(i,0,j-1){
			if(s[i]<s[j] && (idx1==-1 || c[idx1]>c[i]))
				idx1=i;
		}
		int idx2=-1;
		FOR(i,j+1,n-1){
			if(s[j]<s[i] && (idx2==-1 || c[idx2]>c[i]))
				idx2=i;
		}
		if(idx1!=-1 && idx2!=-1){
			min_cost=min(min_cost,c[idx1]+c[idx2]+c[j]);
		}
	}
	if(min_cost==1e15)
		cout<<-1;
	else
		cout<<min_cost;
}