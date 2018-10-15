// Link to Problem : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/modify-the-string/description/
#include <iostream>
#include<ctype.h>
#include<string>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.length();i++){
		if(s[i]=='\n')
			break;

		if(isupper(s[i]))
			cout<<char(tolower(s[i]));
		else
			cout<<char(toupper(s[i]));
	}
	return 0;
}

// Time Complexity : O(n)