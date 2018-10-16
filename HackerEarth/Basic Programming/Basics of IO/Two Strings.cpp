// Link to Problem : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/two-strings-4/
#include <iostream>
#include<string>
using namespace std;
bool equal(int a[],int b[]){
	for(int i=0;i<26;i++){
		if(a[i]!=b[i])
			return 0;
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	string s1,s2;
	while(t--){
	int a[26]={0},b[26]={0};
	cin>>s1>>s2;
	for(int i=0;i<s1.length();i++){
		++a[s1[i]-97];
	}
	for(int i=0;i<s2.length();i++){
		++b[s2[i]-97];
	}
	if(equal(a,b))
		cout<<"YES\n";
	else
		cout<<"NO\n";
}

	return 0;
}

// Time Complexity : O(n), where n is length of string.	