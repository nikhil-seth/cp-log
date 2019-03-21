#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define LD long double
bool fn(int arr[],int m,int n,int mid){
	if(mid<=0)
		return 1;
	int ctr=0;
	for(int i=1;i<=100;i++)
		ctr+=(arr[i]/mid);
	if(ctr>=n)
		return 1;
	return 0;
}
int main(){
	int n,m;
	cin>>n>>m;
	int arr[101];
	for(auto &x:arr)
		x=0;
	int x;
	for(int i=0;i<m;i++){
		cin>>x;
		arr[x]++;
	}
	sort(arr,arr+101);
	int init=0,final=arr[100],mid;
	while(init<final){
		mid=init+(final-init)/2;
		bool a=fn(arr,m,n,mid),a1=fn(arr,m,n,mid+1);
		//cout<<init<<' '<<final<<' '<<mid<<' '<<a<<a1<<endl;
		if(a && !a1){
			init=mid;
			break;
		}
		else if(a)
			init=mid+1;
		else
			final=mid-1;
	}
	cout<<init;
	return 0;
}