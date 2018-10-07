#include<iostream>
using namespace std;

int main(){
	int n,k,temp;
	int a[5]={0,0,0,0,0};
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>temp;
		a[temp]++;
	}
	temp=0;
	while((5-k)>=0){
		temp+=a[5-k];
		k++;
	}
	cout<<temp/3;
	
}

