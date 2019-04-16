#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	LL arr[n-1];
	cin>>arr[0];
	int flag=0;
	LL min_val=arr[0];
	vector<LL> p(n);

	if(arr[0]==0)
		goto l;
	for(int i=1;i<n-1;i++){
		cin>>arr[i];
		if(arr[i]==0)
			goto l;
		arr[i]+=arr[i-1];
		if(arr[i]==0 || arr[i]>=n || arr[i]<=-n)
			goto l;
		min_val=min(arr[i],min_val);
	}
	if(min_val<0)
		min_val=1-min_val;
	else
		min_val=1;
	
	p[0]=min_val;
	for(int i=1;i<n;i++){
		p[i]=arr[i-1]+min_val;
				flag=1;
		if(p[i]<1 || p[i]>n)
			goto l;
	}
    if(set<long long>(p.begin(), p.end()).size() != n)
    	goto l;
    for(int i=0;i<n;i++)
    	cout<<p[i]<<' ';
    return 0;
	l:
	cout<<-1;
	return 0;	
}