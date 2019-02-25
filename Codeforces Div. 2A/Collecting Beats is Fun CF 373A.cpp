#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int arr[10];
	for(auto &x:arr)
		x=0;
	char c;
	cin>>n;
	n=n*2;
	for(int i=0;i<16;i++){
		cin>>c;
		if(c=='.')
			continue;
		else
			arr[c-48]++;
	}
	for(auto &x:arr){
		if(x>n){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
}