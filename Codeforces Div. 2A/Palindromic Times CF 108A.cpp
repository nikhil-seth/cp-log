#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int a=s[0]-48,b=s[1]-48,c=s[3]-48,d=s[4]-48;
	if(b>=6){
		a+=1;
		b=0;
		c=0;
		d=0;
	}
	if(b>c)
		cout<<a<<b<<':'<<b<<a;
	else if(b==c && a>d)
		cout<<a<<b<<':'<<b<<a;
	else{
		c=b+a*10;
		if(c==23)
			c=0;
		else
			c++;
		if((c>=16 && c<20))
			c=20;
		if(c>=6 && c<=9)
			c=10;
		d=c/10;
		b=c%10;
		cout<<d<<b<<':'<<b<<d;
	}
	return 0;
}
