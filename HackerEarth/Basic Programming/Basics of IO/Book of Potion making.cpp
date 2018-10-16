// Link to Problem : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/sum-it-if-you-can-4867f851/
#include <iostream>
#include<string>
using namespace std;
int is(int a,int b){
	return a*b;
}
int main(){
	int sum=0;
	char s;
	for(int i=1;i<11;i++){
		cin>>s;
		sum+=is(i,s-48);
		//cout<<int(s-48);
	}
	if(sum%11==0)
		cout<<"Legal ISBN";
	else
		cout<<"Illegal ISBN";
	return 0;	
}

// Time Complexity : O(1), where n is length of string.	