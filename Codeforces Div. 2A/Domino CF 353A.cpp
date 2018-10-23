#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x,y,sx=0,sy=0,xe=-1,y0=-1;
	cin>>n;
	while(n--){
		cin>>x>>y;
	if((y%2!=0 && x%2==0 )||(y%2==0 && x%2!=0 )){
		xe=x;
		y0=y;
	}
	sx+=x;
	sy+=y;
}
if(sx%2==0 && sy%2==0)
	cout<<0;
else if(sx%2!=0 && sy%2!=0){
	if(xe!=-1)
		cout<<1;
	else
		cout<<-1;
}
else
	cout<<-1;
return 0;
}