#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
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
	int n,k;
	cin>>n>>k;
	int arr[n];
	FORA(x,arr)
		cin>>x;
	int mival=INT_MAX,miind,val;
	for(int i=0;i<k;i++){
		int l=i+k;
		val=arr[i];
		int flag=1;
		if(l>=n){
			l-=n;
			flag=0;
		}
		while(flag || l<i){
			val+=arr[l];
			l+=k;
			if(l>=n){
				l-=n;
				flag=0;
			}
		}
		if(val<mival){
			mival=val;
			miind=i;
		}
	}
	cout<<miind+1;
}
