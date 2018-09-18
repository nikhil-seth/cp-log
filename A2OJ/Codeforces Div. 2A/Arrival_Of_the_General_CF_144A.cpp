// Link to problem :http://codeforces.com/problemset/problem/144/A
#include<iostream>
using namespace std;
int main(){
	int n,a=0,b=0,tl=0,ts=101;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]>tl){
			tl=arr[i];
			a=i;}
		if(arr[i]<=ts){
			ts=arr[i];
			b=i;}
	}
	
	if(a<b)
		cout<<a+(n-1-b);
	else if(a>b)
		cout<<a+(n-1-b)-1;
	return 0;

}
