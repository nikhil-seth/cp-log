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
/* Fenwick Tree for getting min in range(0,r) */
struct FenwickTree{
	vector<int> bit;
	int n;
	FenwickTree(int n){
		this->n=n;
		bit.assign(n,0);
	}
	FenwickTree(vector<int> a):FenwickTree(a.size()){
		for(auto i=0;i<a.size();i++){
			update(i,a[i]);
		}
	}
	int getmin(int r){
		int ret=INT_MAX;
		while(r>=0){
			ret=min(ret,bit[r]);
			r=(r&(r+1))-1;
		}
		return ret;
	}
	void update(int idx,int delta){
		while(idx<n){
			bit[idx]=min(bit[idx],delta);
			idx=(idx|(idx+1));
		}
	}
};

int main(){
	#ifndef ONLINE_JUDGE
	fio
	#endif
}