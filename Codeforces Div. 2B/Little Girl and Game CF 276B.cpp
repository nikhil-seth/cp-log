#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
using namespace std;
int odd_occurences(string s,int n){
	int arr[26]={0};
	for(int i=0;i<n;i++){
		arr[s[i]-97]++;
	}
	int k=0;
	for(auto &x:arr){
		if(x%2!=0)
			k++;
	}
	return k;
}
int main(){
	string s;
	cin>>s;
	int k=odd_occurences(s,s.size());
	//cout<<k;
	if(k==1 || k==0 || k%2!=0)
		cout<<"First";
	else if(k==2 || k%2==0)
		cout<<"Second";
	return 0;
}
