// Link to Problem : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/cipher-1/
#include<iostream>
#include<ctype.h>
#include<string>
using namespace std;
int main(){
	string s;
	int n;
	getline(cin,s);
	cin>>n;
	for(int i=0;i<s.length();i++){
		if(isdigit(s[i])){
			s[i]+=(n%10);
			if(!isdigit(s[i]))
				s[i]-=10;
		}
		else if(isalpha(s[i]) && islower(s[i])){
			s[i]+=(n%26);
			if(!(isalpha(s[i]) && islower(s[i])))
				s[i]-=26;
		}
		else if(isalpha(s[i]) && isupper(s[i])){
				s[i]+=(n%26);
			if(!(isalpha(s[i]) && isupper(s[i])))
				s[i]-=26;
		}

	}
	cout<<s;

 return 0;	
}
//Time Complexity : O(n)