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
	One Based Indexing.
*/
struct FenwickTree{
	vector<int> bit;
	int n;
	FenwickTree(int n){
		this->n=n+1;
		bit.assign(n+1,0);
	}
	FenwickTree(vector<int> a):FenwickTree(a.size()){
		for(auto i=0;i<a.size();i++){
			add(i,a[i]);
		}
	}
	int sum(int r){
		int ret=0;
		for(++r;r>0;r-=(r&(-r)))
			ret+=bit[r];
		return ret;
	}
	int sum(int l,int r){
		return sum(r)-sum(l);
	}
	void add(int idx,int delta){
		for(++idx;idx<n;idx+=(idx&-idx))
			bit[idx]+=delta;
	}
};
int main(){
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int n,r;
	cin>>n;
	vector<int> arr(n);
	FORA(x,arr)
		cin>>x;
	FenwickTree F(arr);
	cin>>n;
	while(n--){
		cin>>r;
		cout<<F.sum(r)<<endl;
	}
}