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
	int n,m;
	cin>>n>>m;
	int arr[n];
	memset(arr,0,sizeof(arr));
	int no[3],j;
	bool pt[3];
	for(int i=0;i<n;i++){
		memset(pt,0,sizeof(pt));
		FORA(x,no){
			cin>>x;
			pt[arr[x-1]-1]=1;
		}
		FORA(x,no){
			if(arr[x-1]==0){// Matlab Yeh no assigned nahi h.
				for(j=0;j<3;j++){
					if(pt[j]==0)
						break;
				}
				arr[x-1]=j+1;
				pt[j]=1;
			}
		}
	}
	FORA(x,arr)
		cout<<x<<' ';
}
