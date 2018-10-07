// Link to problem :http://codeforces.com/problemset/problem/208/A
#include<iostream>
using namespace std;
int main(){
	string s,t;
	cin>>s;
	int ctr=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
			if(ctr==1){
				t+=' ';
				ctr=0;

			}
			i+=2;
			}
		else {
			t+=s[i];
			ctr=1;
		}
	}
	cout<<t;

	return 0;
}
