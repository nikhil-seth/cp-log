#include<iostream>
#include<vector>
using namespace std;
long long get_pisano(long long m){
	vector<long long> vec;
	vec.push_back(0);
	vec.push_back(1);
	long long i=2;
	while(i>0){
		vec.push_back((vec[i-1]+vec[i-2])%m);
		if(vec[i]==1 && vec[i-1]==1 && vec[i-2]==0 && i!=2)
			break;
		i++;
	}
	return vec.size()-3;
}
void fib(long long arr[],int n,int m){
	arr[0]=0;
	arr[1]=1;
	for(long long i=2;i<=n;i++){
		arr[i]=(arr[i-1]+arr[i-2])%m;
	}
}
//60
int main(){
	long long n,m,q=0;
	cin>>n;
	n=n%60;
	long long arr[n+1];
	fib(arr,n,10);
	for(int i=0;i<=n;i++)
		q=(q+arr[i])%10;
	cout<<q;
}
