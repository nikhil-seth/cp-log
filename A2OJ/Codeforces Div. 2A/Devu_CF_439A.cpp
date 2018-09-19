#include<iostream>
#include<vector>
#include<array>
using namespace std;

int main(){
	int n,d,time,temp,jokes=0;
	cin>>n>>d;
	cin>>time;
	while(--n && time<=d){
		cin>>temp;
		time+=temp+10;
		jokes+=2;
	}
	if(time<=d){
		jokes=jokes+((d-time)/5);
		cout<<jokes;
	}
	else
		cout<<-1;	
	return 0;
}

