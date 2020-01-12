#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
using namespace std;
int arr[5][5];
ll fn(string s){
	ll ans=0;
	FOR(i,0,4)
		s[i]-=49;
	ans=arr[s[0]][s[1]] + arr[s[1]][s[0]] + arr[s[2]][s[3]] + arr[s[3]][s[2]];
	ans+=(arr[s[2]][s[1]]+arr[s[1]][s[2]] + arr[s[3]][s[4]]+arr[s[4]][s[3]]);
	ans+=(arr[s[2]][s[3]] + arr[s[3]][s[2]]);
	ans+=(arr[s[4]][s[3]]+arr[s[3]][s[4]]);
	return ans;
}
int main(){
	#ifndef ONLINE_JUDGE
	fio
	#endif
	FOR(i,0,4){
		FOR(j,0,4){
			cin>>arr[i][j];
		}
	}
	string s="12345";

	ll ans=fn(s);
	while(next_permutation(s.begin(),s.end())){
		ans=max(ans,fn(s));
	}
	cout<<ans;
	return 0;
}