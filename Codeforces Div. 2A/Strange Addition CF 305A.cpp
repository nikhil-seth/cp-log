#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n],b[n],j=0;
	int f1=1,f2=1;

	for(auto &x:arr)
		cin>>x;
	for(int i=0;i<n;i++){
		if(arr[i]==0 || arr[i]==100)
			b[j++]=arr[i];
		else if(f1==1 && arr[i]<10){
			b[j++]=arr[i];
			f1=0;
		}
		else if(f2==1 && arr[i]%10==0){
			f2=0;
			b[j++]=arr[i];
		}
	}
		for(int i=0;i<n && f1==1 && f2==1;i++){
			if(arr[i]!=0 && arr[i]!=100 && arr[i]>10 && arr[i]%10!=0){
				b[j++]=arr[i];
				f1=0;
			}
		}
	
	cout<<j<<endl;

	for(int i=0;i<j;i++)
		cout<<b[i]<<' ';
}
