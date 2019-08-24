#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
using namespace std;
int fn(int n,int dp[]){
	if(dp[n]!=0)
		return dp[n];
	int no,temp;
	for(int j=2;j*j<=n;j++){
		if(n%j==0){
			temp=fn(j,dp);
			if(temp>dp[n]){
				dp[n]=temp;
				no=j;
			}
			temp=fn(n/j,dp);
			if(temp>dp[n]){
				dp[n]=temp;
				no=n/j;
			}
		}
	}
	cout<<no<<' ';
	return dp[n];
}
int main(){
	fastio
	//fio
	int n;
	cin>>n;
	while(n!=1){
		cout<<n<<' ';
		for(int j=2;j<=n;j++){
			if(n%j==0){
				n/=j;
				break;
			}
		}
	}
	cout<<1;
}
