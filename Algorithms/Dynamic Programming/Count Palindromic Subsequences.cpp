// Count Palindromic Subsequences
// https://practice.geeksforgeeks.org/problems/count-palindromic-subsequences/1
int countPS(string str){
    int n=str.length();
    int dp[n][n];
    for(int j=0;j<n;j++){
        for(int i=n-1;i>=0;i--){
            if(i==j)
                dp[i][j]=1;
            else if(i>j)
                dp[i][j]=0;
            else if(str[i]==str[j])
                dp[i][j]=dp[i+1][j]+dp[i][j-1]+1;
            else
                dp[i][j]=dp[i+1][j]+dp[i][j-1]-dp[i+1][j-1];
        }
    }
    return dp[0][n-1];
}