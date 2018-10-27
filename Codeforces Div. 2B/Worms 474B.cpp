#include<bits/stdc++.h>
using namespace std;
int bs(int arr[],int l,int r,int find){
	//printf("BS l : %d\t r: %d\t find : %d\n",l,r,find);
	int mid=(l+r)/2;
	if(arr[mid]==find)
		return mid;
	if(arr[mid]<find && arr[mid+1]>=find)
		return mid+1;
	if(mid==r)
		return r;
	if(mid==l)
		return l;
	if(arr[mid]>find)
		return bs(arr,l,mid,find);
	else
		return bs(arr,mid+1,r,find);
}
int main(){
	int n;
	long sum=0;
	cin>>n;
	int arr[n];
	for(auto &x:arr){
		cin>>x;
	 sum+=x;
		x=sum;
	}
	int q,t;
	cin>>t;
	while(t--){
		cin>>q;
			cout<<bs(arr,0,n-1,q)+1<<endl;
}


	return 0;
}