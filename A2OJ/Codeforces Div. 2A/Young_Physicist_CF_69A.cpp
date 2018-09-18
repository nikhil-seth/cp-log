// Link to problem :http://codeforces.com/problemset/problem/69/A
#include<iostream>
using namespace std;
int main(){
	int n,a=0,b=0,c=0,temp;
	cin>>n;
	while(n--){
		cin>>temp;
		a+=temp;
		cin>>temp;
		b+=temp;
		cin>>temp;
		c+=temp;
	}
	if(a==0 && b==0 && c==0)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
