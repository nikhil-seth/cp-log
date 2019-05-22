#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
using namespace std;

int main(){/*
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int t;
	cin>>t;
while(t--){*/
	int n;
	cin>>n;
	int arr[n];
	int ctr1=0;
	FORA(x,arr){
		cin>>x;
		if(x==1){
			ctr1+=1;
			x=-1;
		}
		else
			x=1;
	}
	int s=0;
	int start=0,end=0;
	int ms=INT_MIN,mf=0;
	FOR(i,0,n-1){
		mf+=arr[i];
		if(mf>ms){
			ms=mf;
			start=s;
			end=i;
		}
		if(mf<0){
			mf=0;
			s=i+1;
		}
	}
	cout<<ms+ctr1;//<<endl;
return 0;
}