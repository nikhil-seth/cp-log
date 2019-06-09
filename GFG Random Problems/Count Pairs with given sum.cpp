#include<bits/stdc++.h>
#define LL long long
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
	fio
	int t,n,k,x;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int arr[n];
		int count=0;
		map<int,int> m;
		FOR(i,0,n-1){
			cin>>arr[i];
			m[arr[i]]++;
			if(k-arr[i]==arr[i])
				count--;
		}
		FOR(i,0,n-1)
			count=count+m[k-arr[i]];
		cout<<count/2<<endl;
	}
}