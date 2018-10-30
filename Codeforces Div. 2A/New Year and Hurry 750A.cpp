#include<bits/stdc++.h>
#define FOR(a,b,c) for(int i=(a);i<(b);i+=(c))
using namespace std;
int bs(int arr[],int lo,int high,int t){
	//printf("lo :%d\t hi: %d\t t:%d\n",lo,high,t);
	if(lo>high && arr[high]<=t)
		return high;
	if(lo>high)
		return 0;
	if(lo==high && arr[lo]<t)
		return lo;
	int mid=lo+(high-lo)/2;
	if(arr[mid]<t && arr[mid+1]>t)
		return mid;
	else if(arr[mid]>t)
		return bs(arr,lo,mid-1,t);
	else
		return bs(arr,mid+1,high,t);
}
int main(){
	int n,k;
	int cnst=240;
	cin>>n>>k;
	int arr[n+1];
	FOR(1,n+1,1){
		arr[i]=5*i*(i+1)/2;
	}
	k=cnst-k;
	cout<<bs(arr,1,n,k);

}