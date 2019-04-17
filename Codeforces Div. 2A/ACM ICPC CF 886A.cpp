#include<bits/stdc++.h>
#define LL long long
using namespace std;
//ios_base::sync_with_stdio(false);
bool dp(int arr[],int a,int b,int ca,int cb,int i){
	///cout<<a<<' '<<b<<' '<<i<<' '<<ca<<' '<<cb<<endl;
	if(a==b && i==6)
		return 1;
	if(i==6)
		return 0;
	if(ca==3)
		return dp(arr,a,b+arr[i],ca,cb+1,i+1);
	if(cb==3)
		return dp(arr,a+arr[i],b,ca+1,cb,i+1);
	return dp(arr,a+arr[i],b,ca+1,cb,i+1) || dp(arr,a,b+arr[i],ca,cb+1,i+1);
}
int main(){
	int arr[6];
	for(auto &x:arr)
		cin>>x;
	if(dp(arr,0,0,0,0,0))
		cout<<"YES";
	else
		cout<<"NO";
}

