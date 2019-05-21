// Find Optimum operation
// Link : https://practice.geeksforgeeks.org/problems/find-optimum-operation/0
#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
using namespace std;

int main(){
	string s;
	cin>>s;
	int q,l,r;
	cin>>q;
	int arr[s.length()];
	arr[0]=0;
	for(int i=1;i<s.length();i++){
		if(s[i]==s[i-1])
			arr[i]=arr[i-1]+1;
		else
			arr[i]=arr[i-1];
	}
	while(q--){
		cin>>l>>r;
		cout<<arr[r-1]-arr[l-1]<<endl;
	}
}
