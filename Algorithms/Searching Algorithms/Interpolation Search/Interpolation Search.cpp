#include<bits/stdc++.h>
using namespace std;

int interpolation_search(int arr[],int n,int data){
	int l=0;
	int h=n-1,mid;
	while(l<=h){
		mid=l+((data-arr[l])*(h-l)/(arr[h]-arr[l]));
		//cout<<"mid :"<<mid;
		if(arr[mid]==data)
			return mid;
		else if(arr[mid]>data)
			h=mid-1;
		else
			l=mid+1;
	}
	return -1;
}
int main(){
	int n,data;
	cin>>n;
	int arr[n];
	for(auto &x:arr)
		cin>>x;
	cin>>data;
	cout<<interpolation_search(arr,n,data);
	return 0;
}