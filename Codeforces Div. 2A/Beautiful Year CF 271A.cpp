#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
using namespace std;
int chk(int n){
	int arr[4],k=0;
	while(n!=0){
		arr[k++]=n%10;
		n/=10;
	}
	if(arr[0]==arr[1] || arr[0]==arr[2] || arr[0]==arr[3])
		return 0;
	if(arr[1]==arr[2] || arr[1]==arr[3])
		return 1;
	if(arr[2]==arr[3])
		return 2;
	else 
		return -1;
}
int main(){
	int n,flag=1;
	cin>>n;
	n+=1;
	flag=chk(n);
	while(flag!=-1){
		n+=1;
		flag=chk(n);
	}
	cout<<n;
	return 0;


}