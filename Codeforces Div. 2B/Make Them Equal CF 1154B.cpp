#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(auto &x:arr)
		cin>>x;
	sort(arr,arr+n);
	int d,flag=1;
	int min_val=arr[0];
	int max_val=arr[n-1];
	if(min_val==max_val){	// min_val==max_val
		cout<<0;
		return 0;
	}
	d=max_val-min_val;
	if(d%2==0){
		int k=d/2,mv=min_val+k;
		for(int i=0;i<n;i++){
			if(arr[i]==mv|| arr[i]-k==mv || arr[i]+k==mv)
				continue;
			else{
				flag=0;
				break;
			}
		}
		if(flag==1){
			cout<<k;
			return 0;
		}
	}
	flag=1;
	for(int i=0;i<n;i++){	// max_val=no
		if(arr[i]+d==max_val || arr[i]-d==max_val || arr[i]==max_val)
			continue;
		else{
			flag=0;
			break;
		}
	}
	if(flag==1){
		cout<<d;
		return 0;
	}

	flag=1;
	for(int i=0;i<n;i++){	// min_val=no
		if(arr[i]+d==min_val || arr[i]-d==min_val || arr[i]==min_val)
			continue;
		else{
			flag=0;
			break;
		}
	}
	if(flag==1){
		cout<<d;
		return 0;
	}
	cout<<-1;
	return 0;
}

	