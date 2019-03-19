#include<bits/stdc++.h>
using namespace std;
// Searching Algorithms
// TC : O(n), reduces avg time complexity.
int sorted_linear_search(int arr[],int n,int data){
	for(int i=0;i<n;i++){
		if(arr[i]==data)
			return i;
		else if(arr[i]>data)
			return -1;
	}
	return -1;
}

int main(){
	int data,n;
	cin>>n;
	int arr[n];
	for(auto &x:arr)
		cin>>x;
	cin>>data;
	cout<<sorted_linear_search(arr,n,data);
	return 0;
}