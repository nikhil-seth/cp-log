#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	int arr[n];
	for(auto &x:arr)
		cin>>x;
	if(m<=k)
		cout<<0;
	else{
		sort(arr,arr+n);
		int i=1;
		while(n>=i){
			k=k+arr[n-i]-1;
			if(m<=k)
				break;
			i++;
		}
		if(m<=k)
			cout<<i;
		else
			cout<<-1;
	}
	return 0;
}


	