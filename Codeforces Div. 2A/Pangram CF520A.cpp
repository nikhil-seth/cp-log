#include<bits/stdc++.h>
#define LL long long
using namespace std;
//ios_base::sync_with_stdio(false);
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int arr[26];
	for(auto &x:arr)
		x=0;
	for(int i=0;i<n;i++){
		if(s[i]>96)
			arr[s[i]-97]++;
		else
			arr[s[i]-65]++;
	}
	for(auto &x:arr){
		if(x==0){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}