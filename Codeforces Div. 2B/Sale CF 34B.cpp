#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n,price=0;
	cin>>n>>m;
	int arr[n];
	for(auto &x:arr)
		cin>>x;
	sort(arr,arr+n);
	for(int i=0;i<m;i++){
		if(arr[i]>0)
			break;
		price+=(-1*arr[i]);
	}
	cout<<price;

	return 0;
}