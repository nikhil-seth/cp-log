// Link to problem :http://codeforces.com/problemset/problem/96/A
#include<iostream>
using namespace std;
int main(){
	
	string s;
	getline(cin,s);
	string s1="0000000";
	string s2="1111111";
	if(s.find(s1)!=string::npos || s.find(s2)!=string::npos)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
	
}