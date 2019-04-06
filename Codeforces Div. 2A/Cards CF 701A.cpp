#include <bits/stdc++.h>
#define LL unsigned long long
using namespace std;
int main(){
	int n,x;
	cin>>n;
	pair<int,int> arr[n];
	for(int i=0;i<n;i++){
		cin>>x;
		arr[i]=make_pair(x,i+1);
	}
	sort(arr,arr+n);
	for(int i=0;i<n/2;i++){
		cout<<arr[i].second<<' '<<arr[n-i-1].second<<endl;
	}
	return 0;
}