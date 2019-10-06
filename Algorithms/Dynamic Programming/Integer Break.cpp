// Integer break https://leetcode.com/problems/integer-break/
class Solution {
public:
    int integerBreak(int n) {
        int dp[n+1];
        dp[1]=1;
        for(int i=2;i<=n;i++){
            int val=0,a;
            for(int j=1;j<=i-j;j++){
                a=j*(i-j);
                a=max(a,j*dp[i-j]);
                a=max(a,dp[j]*(i-j));
                a=max(a,dp[j]*dp[i-j]);
                val=max(val,a);
            }
            dp[i]=val;
            cout<<val<<' ';
        }
        return dp[n];
    }
};