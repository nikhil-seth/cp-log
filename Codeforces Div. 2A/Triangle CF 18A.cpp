#include<bits/stdc++.h>
using namespace std;
#define LL long long
bool triangle(int a[]){
	long arr[3];	
	if((a[0]==a[2] && a[2]==a[4])||(a[1]==a[3] && a[3]==a[5]))
		return 0;
	//cout<<"tet";
	arr[0]=(a[2]-a[0])*(a[2]-a[0])+(a[3]-a[1])*(a[3]-a[1]);
	arr[1]=(a[4]-a[0])*(a[4]-a[0])+(a[5]-a[1])*(a[5]-a[1]);
	arr[2]=(a[4]-a[2])*(a[4]-a[2])+(a[5]-a[3])*(a[5]-a[3]);
	//cout<<"test2"<<arr[0]<<' '<<arr[1]<<' '<<arr[2];

	if(arr[0]==0 || arr[1]==0 || arr[2]==0)
		return 0;
	sort(arr,arr+3);	
	//cout<<"test2"<<arr[0]<<' '<<arr[1]<<' '<<arr[2];

	if(arr[2]==(arr[1]+arr[0]))
		return 1;
	return 0;
}
int main(){
	int arr[6];
	for(auto &x:arr)
		cin>>x;
	if(triangle(arr)){
		cout<<"RIGHT";
		return 0;
	}
	for(int i=0;i<6;i++){
		if(i!=0)
			arr[i-1]-=1;
		arr[i]+=1;

		if(triangle(arr)){

			cout<<"ALMOST";
			return 0;
		}
	}
	arr[5]-=1;
	for(int i=0;i<6;i++){
		if(i!=0)
			arr[i-1]+=1;
		arr[i]-=1;
		if(triangle(arr)){

			cout<<"ALMOST";
			return 0;
		}
	}

	cout<<"NEITHER";
}
