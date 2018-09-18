// Link to problem :http://codeforces.com/problemset/problem/459/A
#include<iostream>
using namespace std;
int mod(int x){
	if(x<0)
		x*=-1;
	return x;
}
int main(){
	int x1,x2,y1,y2,x3,x4,y3,y4;
	cin>>x1>>y1>>x2>>y2;
	if(mod(x1-x2)==mod(y1-y2)){
		x3=x1;
		y3=y2;
		y4=y1;
		x4=x2;
		cout<<x3<<' '<<y3<<' '<<x4<<' '<<y4;
	}
	else if(x1-x2==0){
		int side=y1-y2;
		side=mod(side);
		x3=x1+side;
		y3=y1;
		x4=x2+side;
		y4=y2;
		cout<<x3<<' '<<y3<<' '<<x4<<' '<<y4;
	}
	else if(y1-y2==0){
		int side=x1-x2;
		side=mod(side);
		x3=x1;
		y3=y1+side;
		y4=y2+side;
		x4=x2;
		cout<<x3<<' '<<y3<<' '<<x4<<' '<<y4;
	}
	else
		cout<<-1;
	
	return 0;
}
