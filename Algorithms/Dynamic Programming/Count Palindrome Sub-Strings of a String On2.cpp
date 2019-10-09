// https://practice.geeksforgeeks.org/problems/count-palindrome-sub-strings-of-a-string/0
// Count Palindrome Sub-Strings of a String
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
	int t,n;
	string s;
	cin>>t;
	while(t--){
	    cin>>n>>s;
	    bool dp[n][n];
	    FOR(i,0,n-1)
	        dp[i][i]=1;
	    int count=0;
	    FOR(i,0,n-2){
	        if(s[i]==s[i+1]){
	            dp[i][i+1]=1;
	            count++;
	        }
	        else
	            dp[i][i+1]=0;
	    }
	    for(int gap=2;gap<n;gap++){
	        for(int i=0,j=gap;i<n-gap;i++,j++){
	            if(s[i]==s[j] && dp[i+1][j-1]){
	                dp[i][j]=1;
	                count++;
	            }
	            else
	                dp[i][j]=0;
	        }
	    }
	    cout<<count<<endl;
	}
}