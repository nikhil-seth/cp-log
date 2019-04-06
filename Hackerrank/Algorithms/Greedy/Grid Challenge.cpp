#include <bits/stdc++.h>
#define LL unsigned long long
using namespace std;
void append(string &x,int n,string b){
	if(n==0)
		return;
	while(n--)
		x.append(b);
}
bool check(string s[],int n){
	for(int i=0;i<n;i++){
		for(int j=1;j<n;j++){
			if(s[j][i]<s[j-1][i])
				return 0;
		}	
	}
	return 1;
}
void fnsort(string &s,int n){
	int arr[26];
	for(auto &x:arr)
		x=0;
	for(int i=0;i<n;i++)
		arr[s[i]-97]++;
	int j=0;
	for(int i=0;i<26;i++){
		while(arr[i]--){
			s[j++]=i+97;
		}
	}
}
int main(){
	int t;
	cin>>t;
	int n;
	while(t--){
		cin>>n;
		int arr[26];
		for(auto &x:arr)
			x=0;

		string s[n],q;

		for(int i=0;i<n;i++){
			cin>>s[i];
			fnsort(s[i],n);
		}
		//for(int i=0;i<n;i++)
			//cout<<s[i]<<endl;
		if(check(s,n))
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}