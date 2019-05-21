// Kadane's Algorithm
// Link : https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0
#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
using namespace std;
long maxsum(long arr[],int n){
    long maxcur,maxglob;
    maxcur=maxglob=arr[0];
    for(int i=1;i<n;i++){
        maxcur=max(arr[i],maxcur+arr[i]);
        if(maxcur>maxglob)
            maxglob=maxcur;
    }
    return maxglob;
}
int main(){
	int t;
	cin>>t;
	long n;
	while(t--){
		cin>>n;
		long arr[n];
		for(auto &x:arr)
			cin>>x;
		cout<<maxsum(arr,n)<<endl;
	}
}