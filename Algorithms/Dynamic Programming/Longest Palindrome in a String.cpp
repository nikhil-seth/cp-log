// https://practice.geeksforgeeks.org/problems/longest-palindrome-in-a-string/0
// O(n^2)
// Longest Palindrome in a String
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
	int t;
	cin>>t;
	while(t--){
    string s;
    cin>>s;
    int n=s.length();
    bool dp[n][n];
    memset(dp,0,sizeof(dp));
    FOR(i,0,n-1)
        dp[i][i]=1;
    int mi=0,mj=0,ans=1;
    FOR(i,0,n-2){
        if(s[i]==s[i+1]){
            dp[i][i+1]=1;
            if(ans<2){
                mi=i;
                mj=i+1;
                ans=2;
            }
        }
    }
    for(int gap=2;gap<n;gap++){
        for(int i=0,j=gap;i<n-gap;i++,j++){
            if(s[i]==s[j] && dp[i+1][j-1]!=0){
                dp[i][j]=1;
                if(ans<j-i+1){
                    mi=i;
                    mj=j;
                    ans=j-i+1;
                }
            }
        }
    }
    for(int i=mi;i<=mj;i++)
        cout<<s[i];
    cout<<endl;
    }
}