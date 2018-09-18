// Link to problem :https://a2oj.com/p?ID=6
#include<iostream>
#include<string>
using namespace std;
int main(){
	int t,l;
	cin>>t;
	string s;
	while(t--){
		cin>>s;
		l=s.length();
		if(l>10){
			string q;
			l-=2;
			q.push_back(s[0]);
			if(l>=10){
				q.push_back(char((l/10)+48));
				q.push_back(char((l%10)+48));
			}
			else
				q.push_back(char(l+48));
			q.push_back(s[l+1]);
		cout<<q<<endl;
		}
		else
			cout<<s<<endl;

		}
			return 0;
}