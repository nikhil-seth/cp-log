#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int x,y;
	int arr[100];
	cin>>x>>y;
	for(int i=x;i<y;i++)
		arr[i]=1;
	while(n!=1){
		int a,b;
		cin>>a>>b;
		for(int i=a;i<b;i++)
			arr[i]=0;
		n--;
	}
	int ctr=0;
	for(int i=x;i<y;i++){
		if(arr[i]==1)
			ctr++;
	}
	cout<<ctr;
}

