#include <bits/stdc++.h>
using namespace std; 
int bs(long arr[],int r,long data){
	int l=1,mid;
	while(l<=r){
		if(l==r){
			if(arr[l]==data)
				return l;
			else 
				return 0;
		}
		else{
			mid=l+(r-l)/2;
			if(arr[mid]==data)
				return mid;
			else if(arr[mid]<data)
				l=mid+1;
			else if(arr[mid]>data)
				r=mid-1;
		}
	}
	return 0;
}
int init(long arr[],long n){
	arr[1]=1;
	int i=2;
	for(i=2;i<=45000 && arr[i-1]<n;i++)
		arr[i]=arr[i-1]+i;
	return i-1;
}
int main() 
{	long *arr=new long[45001];
	long n;
	cin>>n;
	int q=init(arr,n);
	//for(int i=1;i<q;i++)
	//		cout<<arr[i]<<' ';
	int t=q-1;
	while(t>=(q-1)/2){
		if(bs(arr,ts,n-arr[t])){
			cout<<"YES";
			return 0;
		}
		t--;
	}	
	cout<<"NO";
	return 0;
}
	/*
	long n;
	cin>>n;	init(arr);

	long ctr=bs(arr,n);
	cout<<arr[ctr]<<endl;
	if(binary_search(arr+1,arr+45001,n-arr[ctr]))
		cout<<"YES";
	else
		cout<<"NO";
*/
	//return 0;
