#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define LD long double
bool fn(int n,int a,int b,int m){

	int x=b/m+a/m;
	if(x>=n && m<=a && m<=b)
		return 1;
	return 0;
}
int main(){
	int n,a,b;
	cin>>n>>a>>b;
	int init=1;
	int final=floor((a+b)/n);
	while(init<final){
		int mid=init+(final-init)/2;
		bool a1=fn(n,a,b,mid),a2=fn(n,a,b,mid+1);
				//cout<<init<<' '<<final<<' '<<endl;

		if(a1 & !a2){
			init=mid;
			break;
		}
		else if(a1)
			init=mid+1;
		else
			final=mid-1;
	}
	cout<<init;
	return 0;
}
