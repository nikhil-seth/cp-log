// Link to problem :http://codeforces.com/contest/118/problem/A
#include<iostream>
#include<string>
using namespace std;

int main(){
	string s,r;
	cin>>s;
	for( char c:s){
		int flag;
		if(c>=65&&c<=90)
			c+=32;
		switch(c){
		case 'a': case 'e' : case 'i' : case 'o' :case 'u':case'y': flag=1;
		break;
		default : flag= 0;}
		if(!flag){
			r.append(1, '.');
            r.append(1, c);
		}
	}
	cout<<r;
	return 0;
}
