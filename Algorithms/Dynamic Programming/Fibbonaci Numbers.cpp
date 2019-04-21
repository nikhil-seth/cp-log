// Program to find nth Fibbonaci No
// Link : https://practice.geeksforgeeks.org/problems/nth-fibonacci-number/0

#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
using namespace std;
int main(){
	int t;
	cin>>t;
	int n;
	LL arr[1000];
	arr[0]=1;
	arr[1]=1;
	for(int i=2;i<1000;i++)
		arr[i]=(arr[i-1]+arr[i-2])%1000000007;
	while(t--){
		cin>>n;
		cout<<arr[n-1]<<endl;
	}
}