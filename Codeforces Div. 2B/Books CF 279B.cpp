#include <bits/stdc++.h>
#define LL unsigned long long
using namespace std;
int main(){
	long n,t;
	cin>>n>>t;
	long arr[n+1];
	arr[0]=0;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		arr[i]+=arr[i-1];
	}
	int max_val=0;
	for(int i=0;i<n;i++){
		int init=i,final=n,mid;
		while(init<final){
			int mid=init+(final-init)/2;
			long val1=arr[mid]-arr[i],val2=arr[mid+1]-arr[i];
			if(val1<=t && val2>t){
				init=mid;
				break;
			}
			else if(val1<=t)
				init=mid+1;
			else
				final=mid-1;
		}
		max_val=max(max_val,init-i);
	}
	cout<<max_val;
	return 0;
}