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
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll ctr=0;
		bool flag=0;
		while(n!=1 && !flag){
			if(n%2==0)
				n/=2;
			else if(n%3==0)
				n=(n*2)/3;
			else if(n%5==0)
				n=(n*4)/5;
			else
				flag=1;
			ctr++;
		}
		if(flag)
			cout<<-1;
		else
			cout<<ctr;
		cout<<endl;
	}
}