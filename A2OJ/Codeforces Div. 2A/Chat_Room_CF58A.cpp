// Link to problem :http://codeforces.com/problemset/problem/58/A
#include<iostream>
#include<string>
#include <algorithm> 


using namespace std;
int main(){
	string s,t="hello";
	string q="NO";
	cin>>s;
	int a=0,b=0;
	while(b<s.length()){
		if(s[b++]==t[a])
			a++;
		if(a>=t.length())
			q="YES";
	}
	cout<<q;
	return 0;

}
