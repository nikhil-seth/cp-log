#include<bits/stdc++.h>
using namespace std;
int main(){
	set<char> s;
	string c;
	cin>>c;
	for(int i=0;i<c.length();i++)
		s.insert(c[i]);

	if(s.size()%2==0)
		cout<<"CHAT WITH HER!";
	else
		cout<<"IGNORE HIM!";
	return 0;
}