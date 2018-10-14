// Link to problem :http://codeforces.com/problemset/problem/499/A
#include<iostream>
using namespace std;
int main(){
	int n,x,l,r,t=1,ctr=0;
	cin>>n>>x;
	while(n--){
		cin>>l>>r;
		ctr+=(((l-t)%x)+(r-l+1));
		t=r+1;
		}
		cout<<ctr;
	return 0;
}