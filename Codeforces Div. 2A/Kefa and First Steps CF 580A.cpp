#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
using namespace std;

int main(){
	int n,ctr=1,flag=0;
	cin>>n;
	long arr[n];
	for(auto &x:arr)
		cin>>x;
	for(int i=1;i<n;i++)
	{	if(arr[i-1]<=arr[i])
			ctr++;
		else{
			if(flag<ctr)
				flag=ctr;
			ctr=1;
		}
	}
	if(flag<ctr)
				flag=ctr;
		cout<<flag;

	return 0;


}