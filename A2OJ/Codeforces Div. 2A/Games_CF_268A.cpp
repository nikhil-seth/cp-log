// Link to problem :http://codeforces.com/problemset/problem/268/A
#include<iostream>
using namespace std;
int main(){
	int n,count=0;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
		cin>>a[i]>>b[i];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i!=j && a[i]==b[j])
				++count;
		}
	}
	cout<<count;
	return 0;
}
