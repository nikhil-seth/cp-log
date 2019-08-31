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
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int arr[n];
		FORA(x,arr){
			cin>>x;
		}
		int mval=arr[n-1];
		int count=0;
		for(int i=n-2;i>=0;i--){
			if(arr[i]>mval)
				count++;
			else
				mval=arr[i];
		}
		cout<<count<<endl;
	}
}