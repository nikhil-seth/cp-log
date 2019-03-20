#include<bits/stdc++.h>
using namespace std;
int c2d(char s){
	if(s>=54 && s<=57)
		return s-48;
	if(s=='T')
		return 10;
	if(s=='J')
		return 11;
	if(s=='Q')
		return 12;
	if(s=='K')
		return 13;
	if(s=='A')
		return 14;
}
int main(){
	char trump;
	cin>>trump;
	cin.ignore();
	string s1,s2;
	getline(cin,s1,' ');
	getline(cin,s2);		// Second Card
	//cout<<s1<<endl<<s2;
	if(s1[1]==trump && s2[1]!=trump)
		cout<<"YES";
	else if(s1[1]!=s2[1])
		cout<<"NO";
	else {
		int i1,i2;
		i1=c2d(s1[0]);
		i2=c2d(s2[0]);
		if(i1>i2)
			cout<<"YES";
		else
			cout<<"NO";
	}
	return 0;
}


	