// https://practice.geeksforgeeks.org/problems/count-even-length/0
#include<bits/stdc++.h>
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define ll long long
#define mod1 1000000007
using namespace std;
ll ncr(int n,int r){
    
}
int main(){
    fastio
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int dp[2*n+2][n+1];
        for(int i=0;i<=n;i++)
            dp[i][i]=dp[i][0]=1;
        for(int i=2;i<=2*n;i++){
            for(int j=1;j<=min(i-1,n);j++)
                dp[i][j]=(dp[i-1][j-1]+dp[i-1][j])%mod1;
        }
        cout<<dp[2*n][n]<<endl;
    }
}