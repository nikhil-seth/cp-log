#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t;
	cin>>n;
	int arr[n],j=-1,mc=0;
	arr[0]=0;
	for(int i=0;i<n;i++){
		cin>>t;
		if(i==0)
			arr[++j]=t;
		else if(t==0 && arr[j]!=0)
			arr[++j]=0;
		else if(t==1 && arr[j]==0)
			arr[++j]=1;
		else if(t==1 && arr[j]!=0)
			arr[j]++;
	}
	for(int i=0;i<=j;i++){
		//cout<<arr[i]<<' ';
		mc=max(mc,arr[i]);
	}
	mc=max(mc,arr[0]+arr[j]);
	cout<<mc;
	return 0;
}