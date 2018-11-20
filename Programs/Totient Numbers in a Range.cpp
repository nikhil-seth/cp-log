// Totient Numbers in a range.

#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
using namespace std;
#define LL long long	
void totient_range(int n){
	long long arr[n+1];
	FOR(i,0,n)
		arr[i]=i;

	FOR(i,2,n){
		if(arr[i]==i){   // Means it is a Prime No 
			arr[i]=i-1;
			for(int j=2;j*i<=n;j++)
				arr[j*i]=arr[j*i]*(i-1)/i;
		}
	}
	FOR(i,1,n)
		cout<<arr[i]<<' ';
	}


int main(){
	int n;
	cin>>n;
	totient_range(n);

}