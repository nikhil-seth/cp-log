// https://practice.geeksforgeeks.org/problems/unique-bsts/1
// Unique BST'
int dp[12];
int fn(int n){
    int val=0;
    if(dp[n]!=-1)
        return dp[n];
    int c=0;
    for(int i=1;i<=n;i++)
        c=c+fn(i-1)*fn(n-i);
    dp[n]=c;
    return dp[n];
}
int numTrees(int n){
    for(int i=0;i<=n;i++)
        dp[i]=-1;
    dp[1]=1;
    dp[0]=1;
    return fn(n);
}