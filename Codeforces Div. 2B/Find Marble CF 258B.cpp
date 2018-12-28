#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(long i=(a);i<(b);i++)
using namespace std;
int main(){
	int n,s,t;
	cin>>n>>s>>t;
	int arr[n+1];
	for(auto i=1;i<=n;i++)
		cin>>arr[i];
	int step=0;
	while(s!=t && arr[s]!=0){
		int temp=arr[s];
		arr[s]=0;
		s=temp;
		step+=1;
	}
	if(s==t)
		cout<<step;
	else
		cout<<-1;
}	