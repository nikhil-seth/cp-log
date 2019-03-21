#include <bits/stdc++.h>
using namespace std;
bool res(long double arr[],long double mid,int f,int n){
	if(mid==0)
		return 0;
	int ctr=0;
	for(int i=0;i<n;i++)
		ctr+=int(arr[i]/mid);
	if(ctr>=f)
		return 1;
	return 0;
}
int main(){
	long double pi=acos(-1);
	int t,q;
	cin>>t;
	int n,f;
	while(t--){
		cin>>n>>f;
		f+=1;
		long double arr[n];
		for(auto &x:arr){
			cin>>q;
			x=q*q*pi;
		}
		sort(arr,arr+n);
		long double init=0,final=arr[n-1],mid;
		while(final-init>=1e-6){	
			mid=init+(final-init)/2;
			bool ans1=res(arr,mid,f,n);
			if(ans1)
				init=mid;
			else
				final=mid;
		}
		printf("%.4Lf\n",init);
			
	}
	return 0;
}
