// Link to problem :http://codeforces.com/problemset/problem/282/A
#include<iostream>
using namespace std;
int main(){
	int n,x=0;
	cin>>n;
	string s;
	cin.ignore();
	while(n--){
		getline(cin,s);
		if(s.find('+')!=string::npos)
			++x;
		else
			--x;
	}
	cout<<x;
}