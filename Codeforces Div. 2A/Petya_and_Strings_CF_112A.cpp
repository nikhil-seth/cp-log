// Link to problem :http://codeforces.com/contest/112/problem/A
#include<iostream>
#include<string>
using namespace std;
void st(string &s,string &r){
	int cou=0;
	for(int i=0;i!=s.length();i++){
		if(s[i]>=65 && s[i]<=90)
			s[i]+=32;
		if(r[i]>=65 && r[i]<=90)
			r[i]+=32;
		if(s[i]>r[i]){
			cou=1;
			break;
		}
		else if(s[i]<r[i]){
			cou=-1;
			break;
		}
	}
	cout<<cou;
}
int main(){
	string s,r;
	cin>>s;
	cin>>r;
	st(s,r);
		//cout<<r;
	return 0;
}
