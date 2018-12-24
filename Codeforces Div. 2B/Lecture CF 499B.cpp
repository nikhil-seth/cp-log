#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	string s[m][2],va1,va2;
	for(int i=0;i<m;i++)
		cin>>s[i][0]>>s[i][1];
	for(int i=0;i<n;i++){
		cin>>va1;
		int j=0;
		for(;j<m;j++){
			if(s[j][0].compare(va1)==0){
				if(s[j][0].length()>s[j][1].length())
					cout<<s[j][1]<<' ';
				else
					cout<<s[j][0]<<' ';
			}
		}
	}
	return 0;
}
