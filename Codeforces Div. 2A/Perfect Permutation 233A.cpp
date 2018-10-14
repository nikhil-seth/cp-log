// Link to problem :http://codeforces.com/problemset/problem/233/A
#include<iostream>
#include<set>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n%2==1){
		cout<<-1;
	}
	else{
		for(int i=1;i<=n;i+=2)
			cout<<i+1<<' '<<i<<' ';
	}
	return 0;
}