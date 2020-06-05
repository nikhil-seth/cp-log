#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
// HeapSort
void PercolateDown(vector<int> &arr,int i,int n){
	int v=i;
	if(i*2+1<n && arr[i*2+1]>arr[v])
		v=i*2+1;
	if(i*2+2<n && arr[i*2+2]>arr[v])
		v=i*2+2;
	if(v!=i){
		swap(arr[v],arr[i]);
		PercolateDown(arr,v,n);
	}
}
void HeapSort(vector<int> &arr){
	int n=arr.size();
	for(int i=(n-1)/2;i>=0;i-=1)
		PercolateDown(arr,i,n);
	// O(n)
	for(int i=n-1;i>0;i-=1){
		swap(arr[i],arr[0]);
		PercolateDown(arr,0,i);
	}
}
int main(){
	fastio
	int n;
	cin>>n;
	vector<int> v(n);
	for(auto &c:v)
		cin>>c;
	HeapSort(v);
	for(auto c:v)
		cout<<c<<' ';
}
