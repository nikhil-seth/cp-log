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
	int me,msf;
	me=msf=arr[0];
	FOR(i,1,n-1){
		me=max(arr[i],me*arr[i]);
		msf=max(msf,me);
	}
	cout<<msf<<endl;
}