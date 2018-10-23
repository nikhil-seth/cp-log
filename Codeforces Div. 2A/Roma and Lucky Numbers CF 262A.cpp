#include<iostream>
using namespace std;
int main(){
	int n,k,ptr=0;
	cin>>n>>k;
	string s;
	while(n--){
		int ctr=0;
		cin>>s;
		for(int i=0;i<s.length();i++){
			if(s[i]=='4' || s[i]=='7')
				++ctr;
		}
		if(ctr<=k)
			++ptr;
	}
	cout<<ptr;
}