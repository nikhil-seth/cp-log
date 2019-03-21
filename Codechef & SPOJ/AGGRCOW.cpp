#include <bits/stdc++.h>
using namespace std;
bool res(long arr[],int n,int c,long val){
	int ctr=1;
	for(int i=1,j=0;i<n & ctr<c;i++){
		if(arr[i]-arr[j]>=val){
			ctr++;
			j=i;
		}
	}
	if(c==ctr)
		return 1;
	return 0;
}
int main(){
	int n,c;
	int t;
	cin>>t;
	while(t--){
		cin>>n>>c;
		long arr[n];
		for(auto &x:arr)
			cin>>x;
		sort(arr,arr+n);
		long init=arr[0],fin=arr[n-1]-arr[0];
		while(init<=fin){
			if(init==fin){
				if(res(arr,n,c,init))
					cout<<init;
				else
					cout<<-1;
				return 0;
			}
			else{
				long mid=init+(fin-init)/2;
				bool ans1=res(arr,n,c,mid),ans3=res(arr,n,c,mid+1);
				if(ans1 &&(!ans3)){
					cout<<mid;
					break;
				}
				else if(ans1 && ans3)
					init=mid+1;
				else
					fin=mid;
			}
		}
	cout<<endl;
	}

	return 0;
} 