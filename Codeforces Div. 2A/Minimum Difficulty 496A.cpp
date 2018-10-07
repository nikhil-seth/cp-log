// Link to problem : http://codeforces.com/problemset/problem/496/A
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int n,temp=-1,temp2=1000;
	cin>>n;
	int a[n];
	cin>>a[0];
	for(int i=1;i<n;i++){
		cin>>a[i];
		if((a[i]-a[i-1])>temp)
			temp=a[i]-a[i-1];
	}
	for(int i=1;i<n-1;i++){
		if((a[i+1]-a[i-1])<temp2)
			temp2=a[i+1]-a[i-1];
	}

	cout<<max(temp,temp2);
	return 0;
}