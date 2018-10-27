#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	bool flag=0;
	cin>>n;
	string s[n];
	for(int i=0;i<n;i++){
		cin>>s[i];
		if(flag==0){
		int t=s[i].find("OO");
		if(t!=string::npos){
			s[i][t]='+';
			s[i][t+1]='+';
			flag=1;
		}
	}
	}
	if(flag){
		cout<<"YES\n";
		for(int i=0;i<n;i++)
			cout<<s[i]<<endl;

	}
	else
		cout<<"NO";

	return 0;
}