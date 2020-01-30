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
	int n,a,b;
	cin>>n>>a>>b;
	int arr[n];
	FORA(x,arr)
		cin>>x;
	int ca,cb;
	ca=cb=0;
	bool f=0;
	for(int i=0,j=n-1;i<=j;i++,j--){
		if(i==j){
			if(arr[i]==2){
				if(a>b)
					cb++;
				else
					ca++;
			}
		}
		else{
			if(arr[i]==arr[j] && arr[i]!=2)
				continue;
			else if(arr[i]==arr[j]){
				if(a>b)
					cb+=2;
				else
					ca+=2;
			}
			else if(arr[i]==2){
				if(arr[j]==0)
					ca++;
				else
					cb++;
			}
			else if(arr[j]==2){
				if(arr[i]==0)
					ca++;
				else
					cb++;
			}
			else{
				f=1;
				break;
			}
		}
	}
	if(f)
		cout<<-1;
	else{
		ll ans=ca*a+cb*b;
		cout<<ans;
	}
}