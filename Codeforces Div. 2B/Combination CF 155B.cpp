#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
bool chk(pair<int,int> a,pair<int,int> b){
	if(a.second>b.second)
		return 1;
	if(a.second==b.second)
		return a.first>=b.first;
	return 0;
}
int main(){
	int n;
	cin>>n;
	pair<int,int> arr[n];
	FORA(x,arr){
		cin>>x.second>>x.first;
	}
	sort(arr,arr+n);
	int chance=1,i=n-1;
	LL score=0;
	while(chance-- && i>=0){
		score+=arr[i].second;
		chance+=arr[i--	].first;
	}
	cout<<score;
}


