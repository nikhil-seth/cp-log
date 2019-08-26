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
	int a=101,b=101,t;
	for(int i=0;i<n;i++){
		cin>>t;
		if(t<a){
			b=a;
			a=t;
		}
		else if(t<b && t!=a)
			b=t;
	}
	if(b>100)
		cout<<"NO";
	else
		cout<<b;
}