#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
using namespace std;

int main(){
	int n,m,k,diff,count=0;
	cin>>n>>m>>k;
	long arr[m+1];
	for(auto &x:arr){
		cin>>x;
	}
	for(int i=0;i<m;i++){
	bitset<20> bset01=arr[m];
	bitset<20> bset02=arr[i];
	bset01=bset01^bset02;
	diff=bset01.count();
	if(diff<=k)
		count++;
}
cout<<count;
	return 0;


}