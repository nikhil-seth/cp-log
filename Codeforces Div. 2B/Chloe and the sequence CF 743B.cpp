#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define LD long double
int main(){
	int n;
	LL k;
	cin>>n>>k;
	LL init=1,final=pow(2,n)-1,mid;
	while(1){
		mid=init+(final-init)/2;
		//cout<<init<<' '<<final<<' '<<mid<<endl;
		if(mid==k){
			cout<<n;
			break;
		}
		else if(mid<k)
			init=mid+1;
		else 
			final=mid-1;
		n--;
	}
	return 0;
}