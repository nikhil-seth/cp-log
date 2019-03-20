#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(auto &x:arr)
		cin>>x;
	int mindiff=INT_MAX;
	int minctr=-1;
	for(int i=1;i<n;i++){
		if(abs(arr[i]-arr[i-1])<=mindiff){
			mindiff=abs(arr[i]-arr[i-1]);
			minctr=i;
		}
	}
	if(mindiff>abs(arr[n-1]-arr[0]))
		minctr=0;
	if(minctr==0)
		cout<<n<<' '<<1;
	else
		cout<<minctr+1<<' '<<minctr;
	return 0;
}



