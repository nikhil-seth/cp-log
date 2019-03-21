#include <bits/stdc++.h>
using namespace std;
#define LL long long
bool fn(LL mid,LL n){
	if(mid<2)
		return false;
	LL r,c;
	r=mid/2;
	c=mid-r;
	if(r*c>=n)
		return true;
	return false;
}
int main(){
	LL n;
	cin>>n;
	LL init=2,final=n+1;
	while(init<=final){
		if(init==final){
			cout<<init;
			return 0;
		}
		else{
			LL mid=init + (final-init)/2;
			//cout<<"mid ; "<<mid<<' ';

			bool a1=fn(mid,n),a2=fn(mid-1,n),a3=fn(mid+1,n);
			//			cout<<"mid ; "<<mid<<' ';

			if(a1 && !a2){
				cout<<mid;
				return 0;
			}
			else if(a1 && a2)
				final=mid-1;
			else if(!a1 && !a2)
				init=mid+1;
		}
	}
}