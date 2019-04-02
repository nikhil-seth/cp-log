#include <bits/stdc++.h>
#define LL unsigned long long
using namespace std;
int main(){
	int a1[1001],a2[1001];
	for(auto &x:a1)
		x=0;
	for(auto &x:a2)
		x=0;
	int p,q,l,r;
	cin>>p>>q>>l>>r;
	while(p--){
		int a,b;
		cin>>a>>b;
		while(a<=b)
			a1[a++]=1;
	}
	while(q--){
		int a,b;
		cin>>a>>b;
		while(a<=b)
			a2[a++]=1;
	}
	int ctr=0;
	for(int i=l;i<=r;i++){
		for(int k=0,j=i;k<=1000 && j<=1000;k++,j++){
			if(a2[k]==a1[j] && a2[k]==1){
				ctr++;
				break;
			}
		}
	}
	cout<<ctr;
}