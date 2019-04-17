#include<bits/stdc++.h>
#define LL long long
using namespace std;
//ios_base::sync_with_stdio(false);
int main(){
	int k,l,m,n,d;
	cin>>k>>l>>m>>n>>d;
	LL ctr=0;
	for(int i=1;i<=d;i++){
		if(i%k==0){
			ctr++;
			continue;
		}
		if(i%l==0){
			ctr++;
			continue;
		}
		if(i%m==0){
			ctr++;
			continue;
		}
		if(i%n==0){
			ctr++;
			continue;
		}
	}
	cout<<ctr;
}


