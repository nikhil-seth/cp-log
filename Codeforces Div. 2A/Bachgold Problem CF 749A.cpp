#include <bits/stdc++.h>
#define LL unsigned long long
using namespace std;
int main(){
	int n;
	cin>>n;
	int ctr=0;
	string s,s2;
	if(n%2==0){
		for(int i=1;i<=(n/2);i++)
			s.append("2 ");
		ctr=n/2;
	}
	else{
		for(int i=1;i<=(n-3)/2;i++){
			s.append("2 ");
		}
		s.append("3 ");
		ctr=(n-1)/2;
	}
	cout<<ctr<<endl<<s;
}