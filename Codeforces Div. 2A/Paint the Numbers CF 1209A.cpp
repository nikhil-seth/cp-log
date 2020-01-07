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
	int arr[n];
	FORA(x,arr)
		cin>>x;
	sort(arr,arr+n);
	vector<bool> col(n,0);
	int ctr=0;
	FOR(i,0,n-1){
		if(col[i]==0){
			ctr++;
			FOR(j,i+1,n-1){
				if(arr[j]%arr[i]==0)
					col[j]=1;
			}
		}
	}
	cout<<ctr;
}