#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
using namespace std;

int main(){
	string s;
	int k,t=INT_MIN;
	long su=0;
	int arr[26];
	cin>>s>>k;
	for(auto &x:arr){
		cin>>x;
		t=max(t,x);
	}
	int vals[s.length()+k];
	for(int i=0;i<s.length();i++)
		vals[i]=arr[s[i]-97];
	for(int i=s.length();i<s.length()+k;i++)
		vals[i]=t;
	for(int i=1;i<=(s.length()+k);i++){
		su+=vals[i-1]*i;
	}
	cout<<su;
	return 0;
}
