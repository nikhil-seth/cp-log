#include<bits/stdc++.h>
#define LL long long
using namespace std;
//ios_base::sync_with_stdio(false);
int main(){
	int n,a,b;
	cin>>n;
	a=n/2;
	a-=1;
	if(a>=0)
		b=(n-a*2);
	while(a-- && a>=0)
		cout<<"I hate that I love that ";
	int flag=1;
	while(b>1){
		if(flag==1)
			cout<<"I hate that ";
		else
			cout<<"I love that ";
		flag=1-flag;
		b--;
	}
	if(flag==1)
		cout<<"I hate it";
	else
		cout<<"I love it";
}			
