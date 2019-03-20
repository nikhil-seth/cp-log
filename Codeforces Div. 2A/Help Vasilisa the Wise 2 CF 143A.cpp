#include<bits/stdc++.h>
using namespace std;
int cond(int x){
	if(x<=0 || x>9)
		return 1;
	return 0;
}
int cond2(int x){
	if(x<3 || x>17)
		return 1;
	else 
		return 0;
}
int main(){
	int r1,r2,c1,c2,d1,d2;
	cin>>r1>>r2>>c1>>c2>>d1>>d2;
	if(cond2(r1)||cond2(r2)||cond2(d1)||cond2(d2)||cond2(c1)||cond2(c2))
		goto l;
	int x,y,z,w;
	x=(r1+c1-d2);
	if(x%2!=0)
		goto l;
	x/=2;
	y=r1-x;
	z=c1-x;
	w=d1-x;
	if(cond(x) || cond(y) || cond(z) || cond(w))
		goto l;
	if(x==y || x==z || x==w || y==z || y==w || z==w)
		goto l;
	if(z+w==r2 && y+w==c2 && d2==y+z)
		cout<<x<<' '<<y<<endl<<z<<' '<<w;
	else
		goto l;
	return 0;
	l:
	cout<<-1;
	return 0;
}