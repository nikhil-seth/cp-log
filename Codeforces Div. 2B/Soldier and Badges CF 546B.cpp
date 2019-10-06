#include<bits/stdc++.h>
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define ll long long
#define mod1 1000000007
using namespace std;
int main(){
	fastio
	//fio
	int n;
	cin>>n;
	int arr[n];
	FORA(x,arr)	cin>>x;
	set<int> s;
	ll ans=0;
	for(int i=0;i<n;i++){
		if(s.find(arr[i])==s.end())
			s.insert(arr[i]);
		else{
			int j=1;
			while(s.find(arr[i]+j)!=s.end())
				j++;
			ans+=j;
			s.insert(arr[i]+j);
		}
	}
	cout<<ans;
}