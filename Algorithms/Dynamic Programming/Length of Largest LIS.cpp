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
using namespace std;
// Length of Biggest 
int patience(int arr[],int n){
	vector<int> te;
	for(int i=0;i<n;i++){
		int x=(lower_bound(te.begin(),te.end(),arr[i])-te.begin());
		if(te.size()!=0 && x!=te.size())
			te[x]=arr[i];
		else
			te.pb(arr[i]);
	}
	return te.size();
}
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int n;
	cin>>n;
	int arr[n];
	FORA(x,arr)
		cin>>x;
	cout<<patience(arr,n);
}