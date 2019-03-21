#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define LD long double
bool fn(int t,int a,int b,int c){
	float sum=(b*t)/(a-b);
	if(sum<c)
		return 0;
	return 1;
}
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	float r=(b/a);
	int init=0,final=a*c/b,mid;
	while(init<=final){
		if(init==final){
			cout<<init;
			return 0;
		}
		else{
			mid=init+(final-init)/2;
						//cout<<init<<' '<<final<<' '<<mid<<' '<<fn(mid,a,b,c)<<endl;

			if(fn(mid,a,b,c))
				final=mid;
			else
				init=mid+1;
		}
	}
	return 0;
}