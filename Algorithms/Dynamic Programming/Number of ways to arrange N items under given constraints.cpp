// Number of ways to arrange N items under given constraints
// https://www.geeksforgeeks.org/number-of-ways-to-arrange-n-items-under-given-constraints/
// https://disq.us/url?url=https%3A%2F%2Fcodeforces.com%2Fproblemset%2Fproblem%2F553%2FA%3AI6-lavI6tFj2tF0PCxr2lBw9FLw&cuid=2480709
#include<bits/stdc++.h>
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define ll long long
#define mod1 1000000007
using namespace std;
int maxn=1010;
int main(){
	fastio
	//fio
	int k;
	cin>>k;
	int arr[k];
	int max=0;
	FORA(x,arr){
		cin>>x;
		max+=x;
	}
	long **C=new long*[maxn];
	FOR(i,0,maxn-1)
		C[i]=new long[maxn];
	C[0][0]=1;
	for(int i=0;i<maxn;i++){
		for(int j=0;j<=i;j++){
			if(j==0 || i==j)
				C[i][j]=1;
			else if(i<j)
				C[i][j]=0;
			else
				C[i][j]=(C[i-1][j-1]%mod1+C[i-1][j]%mod1)%mod1;
		}
	}
	ll prev=1;
	ll total=arr[0];
	FOR(i,1,k-1){
		prev=(prev*(C[total+arr[i]-1][arr[i]-1]))%mod1;
		//cout<<prev<<endl;
		total+=arr[i];
	}
	cout<<prev;
}