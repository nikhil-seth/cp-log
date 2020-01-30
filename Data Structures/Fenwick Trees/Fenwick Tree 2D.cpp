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
/*  Fenwick Tree
	Finding sum in 2D array.
*/
struct FenwickTree{
	vector<vector<int>> bit;
	int n,m;
	FenwickTree(int n,int m){
		this->n=n;
		this->m=m;
		bit.assign(n,vector<int>(m,0));
	}
	FenwickTree(const vector<vector<int>> &a):FenwickTree(a.size(),a[0].size()){
		for(auto i=0;i<a.size();i++){
			for(int j=0;j<a[0].size();j++)
				add(i,j,a[i][j]);
		}
	}
	int sum(int x,int y){
		int ret=0;
		for(int i=x;i>=0;i=(i&(i+1))-1){
			for(int j=y;j>=0;j=(j&(j+1))-1){
				ret+=bit[i][j];
			}
		}
		return ret;
	}
	void add(int x,int y,int delta){
		for(int i=x;i<n;i=i|(i+1)){
			for(int j=y;j<m;j|(j+1))
				bit[i][j]+=delta;
		}
	}
};
int main(){
	#ifndef ONLINE_JUDGE
	fio
	#endif
	FenwickTree F(3,3);
}