// Link to problem : http://codeforces.com/problemset/problem/158/A
#include<iostream>
using namespace std;
int main(){
	int n,k,temp=0,t,ctr=0;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>t;
		if(t && t>=temp){
			++ctr;
		}
		if(k==i+1)
			temp=t;
	}
	cout<<ctr;
	return 0;

}