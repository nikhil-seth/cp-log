#include <bits/stdc++.h>
#define LL unsigned long long
using namespace std;
int main(){
	int n;
	cin>>n;
	long arr[n];
	for(auto &x:arr)
		cin>>x;
	for(int i=0;i<n;i++){
		if(i==0)
			cout<<arr[i+1]-arr[i]<<' '<<arr[n-1]-arr[0];
		else if(i==n-1)
			cout<<arr[i]-arr[i-1]<<' '<<arr[n-1]-arr[0];
		else
			cout<<min((arr[i+1]-arr[i]),(arr[i]-arr[i-1]))<<' '<<max(arr[n-1]-arr[i],arr[i]-arr[0]);
		cout<<endl;
	}
	return 0;
}