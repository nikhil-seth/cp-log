// Link to Problem : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/cartag-948c2b02/
#include <iostream>
#include<string>
using namespace std;
bool vowel(const char &s){
	switch (s){
		case 'A' : case 'E' : case 'I':case 'O': case 'U' : case 'Y' :
		return 1;
	}
	return 0;
}
bool iseven(int a,int b){
	if((a+b)%2==0)
		return 1;
	return 0;
}
int main(){
	string s;
	cin>>s;
	if(vowel(s[2])){
		cout<<"invalid";
		return 0;
	}
	if(iseven(s[0]-48,s[1]-48) && iseven(s[3]-48,s[4]-48)&& iseven(s[4]-48,s[5]-48) && iseven(s[7]-48,s[8]-48))
		cout<<"valid";
	else
		cout<<"invalid";

	return 0;	
}

// Time Complexity : O(1), where n is length of string.	