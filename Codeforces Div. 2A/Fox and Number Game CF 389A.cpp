// Link to Problem : https://codeforces.com/contest/389/problem/A
#include<bits/stdc++.h>
using namespace std;
void rec(int arr[],int n){
	int ctr=0;
	sort(arr,arr+n);
	for(int i=n-1;i>0;i--){
		if(arr[i]>arr[i-1]){
			arr[i]-=arr[i-1];
			++ctr;
		}
	}
	if(ctr!=0)
		rec(arr,n);
}
int main(){
	int n,x1,x2,sum=0;
	cin>>n;
	int arr[n];
	for(auto &x:arr)
		cin>>x;
	rec(arr,n);
	for(int i=0;i<n;i++){
		sum+=(arr[i]);
	}
	cout<<sum;
	return 0;
}