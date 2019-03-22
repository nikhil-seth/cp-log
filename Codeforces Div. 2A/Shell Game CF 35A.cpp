#include<bits/stdc++.h>
using namespace std;
#define LL long long

void swap(int arr[],int a,int b){
	int temp=arr[a-1];
	arr[a-1]=arr[b-1];
	arr[b-1]=temp;
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w+",stdout);
	
	int n,a,b;
	cin>>n;
	int arr[3]={0,0,0};
	arr[n-1]=1;
	for(int i=0;i<3;i++){
		cin>>a>>b;
		swap(arr,a,b);
	}
	for(int i=0;i<3;i++){
		if(arr[i]==1)
			cout<<i+1;
	}
	return 0;
}
