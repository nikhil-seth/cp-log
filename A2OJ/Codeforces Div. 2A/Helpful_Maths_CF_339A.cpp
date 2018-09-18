// Link to problem :http://codeforces.com/problemset/problem/339/A
#include<iostream>
#include<string>
using namespace std;
void conca(string &s,string d,int k){
	while(k--){
		s+=d;
	}
}
int main(){
	string s;
	int a[3]={0,0,0};
	cin>>s;
	int i=0,k;
	k=s.length();
	while(i<k){
		if(s[i]=='1')
			a[0]++;
		else if(s[i]=='2')
			a[1]++;
		else if(s[i]=='3')
			a[2]++;
		i++;
	}
	s.clear();
	conca(s,"1+",a[0]);
	conca(s,"2+",a[1]);
	conca(s,"3+",a[2]);
	s.pop_back();
	cout<<s;

	return 0;
}
