#include<bits/stdc++.h>
#define pb push_back
#define FORA(x,arr) FOR(auto &(x):(arr))
using namespace std;
int ctr(string s,int n){
    int dp[n][n];
    memset(dp,0,sizeof(dp));
    bool P[n][n];
    memset(P,0,sizeof(P));
    for(int i=0;i<n;i++)
        P[i][i]=true;
    
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            dp[i][i+1]=1;
            P[i][i+1]=true;
        }
    }
    
    for(int gap=2;gap<n;gap++){
        for(int i=0;i<n-gap;i++){
            int j=gap+i;
            if(s[i]==s[j] && P[i+1][j-1])
                P[i][j]=true;
            // We checked from P[i+1][j-1] ki usse choti string pallindrom h ya nahi
            dp[i][j]=dp[i+1][j]+dp[i][j-1]-dp[i+1][j-1];
            if(P[i][j]==true)
                dp[i][j]+=1;
        }
    }
    return dp[0][n-1];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        cout<<ctr(s,n)<<endl;
    }
}