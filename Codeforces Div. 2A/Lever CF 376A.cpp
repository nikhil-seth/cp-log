#include<bits/stdc++.h>
using namespace std;
#define LL long long 
int main(){
	LL lever,left=0,right=0,t;
	string s;
	cin>>s;
	for(lever=0;lever<s.length();lever++){
		if(s[lever]=='^')
			break;
	}
	for(LL i=0;i<s.length();i++){
		if(s[i]!='=' && s[i]!='^'){
			t=lever-i;
			if(t>0)
				left+=((s[i]-48)*t);
			else{
				t=i-lever;
				right+=((s[i]-48)*t);
			}
		}
	}
	if(left==right)
		cout<<"balance";
	else if(left>right)
		cout<<"left";
	else
		cout<<"right";
	return 0;
}