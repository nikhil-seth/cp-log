// https://practice.geeksforgeeks.org/problems/printing-maximum-sum-increasing-subsequence/0
// Printing Maximum Sum Increasing Subsequence
#include<bits/stdc++.h>
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define ll long long
#define mod1 1000000007
using namespace std;
int main(){
	fastio
    int n,t;
    cin>>t;
    while(t--){
    cin>>n;
    int arr[n];
    FORA(x,arr) cin>>x;
    int dp[n],move[n];
    dp[n-1]=arr[n-1];
    move[n-1]=-1;
    int ans=n-1;
    for(int i=n-2;i>=0;i--){
        int val=0;
        move[i]=-1;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i] && val<dp[j]){
               val=dp[j];
               move[i]=j;
            }
        }
        dp[i]=val+arr[i];
        if(dp[ans]<=dp[i])
            ans=i;
    }
    while(ans!=-1){
        cout<<arr[ans]<<' ';
        ans=move[ans];
    }
    cout<<endl;
    }
}
