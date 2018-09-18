// Link to problem :http://codeforces.com/problemset/problem/136/A
#include<iostream>

using namespace std;
int main(){
	int n,t;
	cin>>n;
	int arr[n+1];
	for(int i=1;i<=n;i++){
		cin>>t;
		arr[t]=i;
	}
	for(int i=1;i<=n;i++)
		cout<<arr[i]<<' ';
	return 0;

}
