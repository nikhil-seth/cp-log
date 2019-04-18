#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main(){
	int n,ac,bc,b,a;
	cin>>n>>bc>>ac;
	b=bc;
	a=ac;
	int arr[n];
	for(auto &x:arr)
		cin>>x;
	int ctr=0,i=0;
	while((b>0 || a>0) && ctr<n){
		if(arr[i]==0){
			if(a!=0)
				a-=1;
			else
				b-=1;
		}
		else{
			if(a==ac)
				a-=1;
			else if(b!=0){
				b-=1;
				if(a<ac)
					a+=1;
			}
			else
				a-=1;
		}
		ctr+=1;
		i++;
	}
	cout<<ctr;
}