#include<bits/stdc++.h>
using namespace std;
void sub(string &s,int n){
	if(int(s[s.length()-1]-48) >= n)
		s[s.length()-1]-=n;
	else{
		for(int i=s.length()-2;i>=0;i--){
			if(int(s[i]-48)!=0){
				s[i]-=1;
				i+=1;
				while(i!=s.length()-1){
					s[i++]=57;
				}
				n=(int(s[i]-48)+10-n)+48;
				s[i]=n;
				break;
			}
		}
	}
}
int main(){
	int n;
	string s;
	cin>>s>>n;
	sub(s,n);
	cout<<s;
	return 0;
}
