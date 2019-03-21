#include <bits/stdc++.h>
using namespace std;
#define LL long long
bool data(LL val){
	int sum=0;
	while(val!=0){
		sum+=val%10;
		val/=10;
	}
	if(sum==10)
		return 1;
	return 0;
}
int main(){
	int n;
	cin>>n;
	LL *arr=new LL[10001];
	long j=0;

	for(LL i=19;i<1e20 && j<=n;i++){
		if(data(i))
			arr[j++]=i;
	}
	cout<<arr[n-1];
}