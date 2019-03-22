#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int arr[26];
	for(auto &x:arr)
		x=0;
	for(int i=0;i<s.length();i++)
		arr[s[i]-97]++;
	int no=min(min((arr[13]-1)/2,arr[8]),min(arr[4]/3,arr[19]));
	cout<<no;
	return 0;

}