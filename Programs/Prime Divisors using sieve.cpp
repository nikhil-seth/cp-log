// Finding Prime Divisors using Sieve O(log(log(n)) + O(log(N))=O(log(n))
#include<bits/stdc++.h>
using namespace std;
void Sieve(int arr[],int n){
	arr[1]=1;
	for(int i=2;i<n;i++){
		if(i%2==0)
			arr[i]=2;
		else
			arr[i]=i;
	}
	for(int i=3;i*i<n;i++){
		if(arr[i]==i){
			for(int j=1;i*j<n;j++){
				if(arr[j*i]==j)
					arr[j*i]=i;
			}
		}
	}
}

int get_factor(int arr[],int x,int k[]){
	int ctr=-1;
	while(x!=1){
		k[(++ctr)]=arr[x];
		x/=arr[x];
	}
	return ctr;
}
int main(){
	int n;
	cin>>n;
	int t=100;
	int arr[100],k[n];
	Sieve(arr,n+5);
	/*for(int i=1;i<n;i++)
		printf("%d\t%d\n",i,arr[i]);
	*/int ctr=get_factor(arr,n,k);
	for(int i=0;i<=ctr;i++){
		cout<<k[i]<<' ';
}

}