#include<bits/stdc++.h>
using namespace std;
int linear_search(int arr[],int n,int tgt){
	for(int i=0;i<n;i++){
		if(arr[i]==tgt)
			return i+1;
	}
	return -1;
}
int main(){
	int n,t;
	cin>>n>>t;
	int arr[n];
	for(auto &x:arr)
		cin>>x;
	cout<<linear_search(arr,n,t);
}		