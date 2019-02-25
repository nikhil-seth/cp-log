#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1="",s2="",s;
	int ctr1=0,ctr2=0;
	int n;
	cin>>n;
	//cout<<"Test";
	while(n--){
		cin>>s;
		if(s.compare(s1)==0)
			ctr1++;
		else if(s.compare(s2)==0)
			ctr2++;
		else if(s1.length()==0){
			s1=s;
			ctr1++;
		}
		else{
			s2=s;
			ctr2++;
		}
	}
	if(ctr1>ctr2)
		cout<<s1;
	else
		cout<<s2;
	return 0;
}