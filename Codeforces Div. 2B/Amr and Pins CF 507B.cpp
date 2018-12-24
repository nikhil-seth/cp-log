#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(long i=(a);i<(b);i++)
using namespace std;

int main(){
	long r,x1,x2,y1,y2,x3,y3;
	float m;
	cin>>r>>x1>>y1>>x2>>y2;
	long iter=0,k;
	float dist=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	iter+=floor(dist/(2*r));
	m=0;
	//cout<<"Iter :"<<iter;
	if(x2!=x1){
		m=float(y2-y1)/(x2-x1);
		k=sqrt((1+pow(m,2)));
		k=(iter*2*r)/k;
		x3=x1+k;
		y3=y1+m*k;
	}
	else{
		x3=x1;
		if(y2==y1)
			y3=y1;
		else
			y3=y1+(y2-y1)/abs(y2-y1)*iter*2*r;
	}
	//cout<<2*iter<<' '<<dist<<' '<<x3<<' '<<y3<<endl;
	if(x2==x3 && y2==y3 && (dist-floor(dist))==0)
		cout<<iter;
	else 
		cout<<iter+1;
	
	return 0;
}