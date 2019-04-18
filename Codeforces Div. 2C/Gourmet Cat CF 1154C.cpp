#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main(){
	long a,b,c;
	cin>>a>>b>>c;
	long ctr=0,val;
	val=min(a/3,min(b/2,c/2));
	ctr=val*7;
	a-=(val*3);
	b-=(val*2);
	c-=(val*2);
	int m=min(a,min(b,c));
	if(a==m){
		if(a==0){
			if(a==b && a==c)
				ctr+=0;
			else if(a==b|| a==c)
				ctr+=1;
			else
				ctr+=2;
		}
		else if(a==1){
			if(b==1)
				ctr+=4;
			else if(c==1)
				ctr+=3;
			else
				ctr+=5;
		}
		else
			ctr+=6;
	}
	else if(b==0){
		if(b==c){
			if(a==1)
				ctr+=1;
			else
				ctr+=2;
		}
		else if(c==1)
			ctr+=2;
		else
			ctr+=3;
	}
	else if(b==1){
		if(b==c)
			ctr+=4;
		else if(a==2)
			ctr+=5;
		else
			ctr+=6;
	}
	else if(c==0){
		if(a==1)
			ctr+=2;
		else if(b==1)
			ctr+=3;
		else
			ctr+=4;
	}
	else{
		if(a==2)
			ctr+=5;
		else
			ctr+=6;
	}
	cout<<ctr;
}