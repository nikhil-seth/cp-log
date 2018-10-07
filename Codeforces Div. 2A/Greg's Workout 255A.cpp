// Link to problem : http://codeforces.com/problemset/problem/255/A
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int n,c=0,b=0,ba=0,t;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>t;
		if(i%3==0)
			c+=t;
		else if(i%3==1)
			b+=t;
		else
			ba+=t;
	}
	if(max(ba,b)==b){
		if(max(b,c)==c)
			cout<<"chest";
		else
			cout<<"biceps";
	}
	else{
		if(max(ba,c)==c)
			cout<<"chest";
		else
			cout<<"back";
	}
	return 0;
	
}