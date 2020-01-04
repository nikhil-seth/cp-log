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
int main(){
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int n;
	cin>>n;
	int x1,x2,y1,y2,ans=0;
	while(n--){	
		cin>>x1>>y1>>x2>>y2;
		ans=ans + (abs(x2-x1)+1)*(abs(y2-y1)+1);
	}
	cout<<ans;
}