#include<bits/stdc++.h>
using namespace std;
int bs(int arr[],int n,int low,int high,int target){
	int mid = low + (high - low)/2;
	//printf(" low : %d\t Mid : %d\t Hight : %d\n",low,mid,high);
	if(high<low)
		return -1;
	if(arr[mid]>target && arr[mid-1]<=target)
		return mid;
	if(high==low && arr[mid]>target)
		return mid;
	if(high==low && arr[mid]<=target)
		return -1;
	if(arr[mid]>target)
		return bs(arr,n,low,mid-1,target);
	else
		return bs(arr,n,mid+1,high,target);
	
}
int main(){
	int n,ctr=0,k;
	while(1){
		ctr=0;
		cin>>n;
		if(n==0)
			break;
		int arr[n];
		for(auto &x:arr)
			cin>>x;
		sort(arr,arr+n);
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				k=bs(arr,n,0,n-1,(arr[i]+arr[j]));
				if(k!=-1)
					ctr+=(n-k);

				//printf(" i :%d\t j : %d\t bs : %d\n",i,j,k);
			}
		}
			cout<<ctr<<endl;

	}

	return 0;
}