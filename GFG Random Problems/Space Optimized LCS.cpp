#include<bits/stdc++.h>
#define pb push_back
#define FORA(x,arr) FOR(auto &(x):(arr))
using namespace std;
int n,m;
string x,y;
int fn(){
    int dp[2][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0 || j==0)
                dp[i%2][j]=0;
            else if(x[i-1]==y[j-1])
                dp[i%2][j]=1+dp[(i+1)%2][j-1];
            else
                dp[i%2][j]=max(dp[(i+1)%2][j],dp[i%2][j-1]);
        }
    }
    return dp[n%2][m];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        cin>>x>>y;
        cout<<fn()<<endl;
    }
}