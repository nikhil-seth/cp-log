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
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif

	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int arr[n];
		FORA(x,arr)
			cin>>x;
		bool f=0;
		FOR(i,0,n-1){
			FOR(j,i+2,n-1){
				if(arr[i]==arr[j]){
					f=1;
					break;
				}
			}
			if(f==1)
				break;
		}
		if(f)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}