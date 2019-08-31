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
	fastio
	//fio
	int n;
	cin>>n;
	int oddc=0,evenc=0;
	int x,ans=0;
	FOR(i,0,n-1){
		cin>>x;
		if(x%2==0)
			evenc++;
		else
			oddc++;
	}
	if(evenc>oddc)
		ans=oddc;
	else
		ans=evenc;
	cout<<ans;
}
