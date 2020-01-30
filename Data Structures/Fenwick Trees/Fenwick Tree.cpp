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
	Finding sum in 1D array.
*/
struct FenwickTree{
	vector<int> bit;
	int n;
	FenwickTree(int n){
		this->n=n;
		bit.assign(n,0);
	}
	FenwickTree(vector<int> a):FenwickTree(a.size()){
		for(auto i=0;i<a.size();i++){
			add(i,a[i]);
		}
	}
	int sum(int r){
		int ret=0;
		while(r>=0){
			ret+=bit[r];
			r=(r&(r+1))-1;
		}
		return ret;
	}

	int sum(int l,int r){
		return sum(r)-sum(l);
	}
	void add(int idx,int delta){
		while(idx<n){
			bit[idx]+=delta;
			idx=(idx|(idx+1));
		}
	}
};
/* Fenwick Tree for getting min in range(0,r) */

int main(){
	#ifndef ONLINE_JUDGE
	fio
	#endif
	ll n,t;
	cin>>n>>t;
	ll arr[n];
	FORA(x,arr){
		cin>>x;
	}
	
	
	
	return 0;
}