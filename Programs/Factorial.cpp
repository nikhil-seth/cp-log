#include<iostream>
using namespace std;
#define MAX 500	
int mult(int x,int res[],int res_size){
	int carry=0;
	for(int i=0;i<res_size;i++){
		int t=x*res[i]+carry;
		res[i]=t%10;
		carry=t/10;
	}
	while(carry){
		res[res_size++]=carry%10;
		carry/=10;
	}
	return res_size;
}
void fact(int n){
	int res[MAX];
	res[0]=1;
	int res_size=1;
	for(int x=2;x<=n;x++){
		printf("Res Size :%d\n",res_size);
		res_size=mult(x,res,res_size);
	}	
	for(int x=res_size-1;x>=0;x--){
		cout<<res[x];
	}
}

int main(){
	int n;
	cin>>n;
	fact(n);
	return 0;
}