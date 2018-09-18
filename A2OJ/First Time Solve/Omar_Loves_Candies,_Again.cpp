// Link to problem :https://a2oj.com/p?ID=193
#include<iostream>
#include<vector>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int x[26];
		for(int i=0;i<26;i++)
			x[i]=0;
		string s;
		cin>>s;
		for(int i=0;s[i]!='\0';i++)
			x[s[i]-97]++;
		int ans=0;
		for(int i=0;i<26;i++){
			if(x[ans]<x[i])
				ans=i;
		}
		cout<<x[ans]<<' '<<char(ans+97)<<endl;
	}
	return 0;
}