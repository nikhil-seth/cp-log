#include <bits/stdc++.h>
#define LL unsigned long long
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(auto &x:arr)
		cin>>x;
	int i=0,j=n-1;
	int s[2]={0,0},dict=0;
	while(i<=j){
		if(arr[i]>arr[j])
			s[dict]+=arr[i++];
		else
			s[dict]+=arr[j--];
		dict=1-dict;
	}
	cout<<s[0]<<' '<<s[1];
	return 0;
}