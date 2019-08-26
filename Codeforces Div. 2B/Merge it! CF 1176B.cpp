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
		int n;
		cin>>n;
		int arr[3];
		memset(arr,0,sizeof(arr));
		long x;
		FOR(i,0,n-1){
			cin>>x;
			arr[x%3]++;
		}
		ll ans;
		ans=arr[0];	//Which are already Divisble by 3.
		ll temp=min(arr[1],arr[2]);
		ans+=temp;
		arr[1]-=temp;
		arr[2]-=temp;
		// Either arr1 or arr2
		if(arr[2]==0)
			ans+=(arr[1]/3);
		else
			ans+=(arr[2]/3);
		cout<<ans<<endl;
	}
}