// Program to find nth Fibbonaci No
// Link to Applications : https://www.geeksforgeeks.org/applications-of-catalan-numbers/
// Link : https://practice.geeksforgeeks.org/problems/nth-catalan-number/0

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
	unsigned LL arr[101];
	arr[0]=1;
	for(int i=1;i<101;i++){
		int j=0;
		arr[i]=0;
		while(j<i){
			arr[i]+=arr[j]*arr[i-1-j];
			j++;
		}
	}
	while(t--){
		cin>>n;
		cout<<arr[n]<<endl;
	}
}