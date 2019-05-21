// Perfect Sum Problem
// Link : https://practice.geeksforgeeks.org/problems/perfect-sum-problem/0
#include<iostream>
using namespace std;
int main(){
    int t,n,sum;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        long ssum=0;
        for(auto &x:arr){
            cin>>x;
            ssum+=x;
        }
        cin>>sum;
        if(ssum<sum)
            cout<<0;
        else if(ssum==sum)
            cout<<1;
        else{
            int dp[n+1][sum+1];
            for(int i=1;i<=sum;i++)
                dp[0][i]=0;
            for(int i=0;i<=n;i++)
                dp[i][0]=1;
            for(int i=1;i<=n;i++){
                for(int j=1;j<=sum;j++){
                    if(arr[i-1]>j)
                        dp[i][j]=dp[i-1][j];
                    else
                        dp[i][j]=dp[i-1][j]+dp[i-1][j-arr[i-1]];
                }
            }
            cout<<dp[n][sum];
        }
        cout<<endl;
    }
}
