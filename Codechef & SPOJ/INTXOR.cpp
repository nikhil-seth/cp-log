#include<bits/stdc++.h>
using namespace std;
long op(long a,long b,long c){
	long r;
	cout<<1<<' '<<a<<' '<<b<<' '<<c<<endl;
	cin>>r;
	return r;
}
int main(){
	long t,n,kt;
	cin>>t;
	while(t--){
		cin>>n;
		kt=n;
		long arr[n+1],a,b,c,d,e,f,g,r1,r2,r3,r4,r5,r6,r7,res;
		while(n>=8 || n==4){
			n-=4;
			a=n+1;
			b=n+2;
			c=n+3;
			d=n+4;
			r1=op(a,b,c);
			r2=op(a,b,d);
			r3=op(a,c,d);
			r4=op(b,c,d);
			arr[a]=r1^r2^r3;
			arr[b]=r1^r2^r4;
			arr[c]=r3^r4^r1;
			arr[d]=r3^r4^r2;
		}
		if(n==5){
			r1=op(1,2,3);	r2=op(1,2,4);
			r3=op(3,4,5);	r4=op(1,3,5);
			r5=op(2,4,5);	arr[1]=r1^r5^r3;
			arr[2]=r2^r4^r3;	arr[3]=r2^r4^r5;
			arr[4]=r1^r4^r5;	arr[5]=r1^r2^r3;
		}
		else if(n==6){
			r1=op(1,2,3);	r2=op(1,2,4);
			r3=op(3,4,5);	r4=op(3,4,6);
			r5=op(5,6,1);	r6=op(2,6,5);
			arr[1]=r4^r5^r3;	arr[4]=r5^r2^r6;
			arr[2]=r4^r6^r3;	arr[5]=r1^r2^r3;
			arr[3]=r1^r6^r5;	arr[6]=r1^r2^r4;
		}
		else if(n==7){
			r1=op(1,2,3);	r2=op(1,2,4);
			r3=op(3,4,5);	r4=op(3,4,6);
			r5=op(5,6,7);	r6=op(1,7,5); 		r7=op(2,6,7);
			arr[5]=r1^r2^r3;		arr[6]=r1^r2^r4;		arr[7]=r3^r4^r5;
			arr[1]=r6^arr[7]^arr[5];		arr[2]=r7^arr[7]^arr[6];
			arr[3]=arr[1]^arr[2]^r1;		arr[4]=arr[1]^arr[2]^r2;	
		}
	cout<<2<<' ';
	for(int i=1;i<=kt;i++)
		cout<<arr[i]<<' ';
	cout<<endl;
	cin>>res;
	if(res==-1)
		break;
	}
	return 0;
}
