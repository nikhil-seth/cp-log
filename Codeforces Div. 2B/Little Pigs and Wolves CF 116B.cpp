#include <bits/stdc++.h>
#define LL unsigned long long
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int ctr=0;
	char s[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cin>>s[i][j];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(s[i][j]=='W'){
				if(i-1>=0 && s[i-1][j]=='P'){
					s[i-1][j]='.';
					ctr++;
					continue;
				}
				else if(i+1<n && s[i+1][j]=='P'){
					s[i+1][j]='.';
					ctr++;
					continue;
				}
				else if(j-1>=0 && s[i][j-1]=='P'){
					s[i][j-1]='.';
					ctr++;
					continue;
				}
				else if(j+1<m && s[i][j+1]=='P'){
					s[i][j+1]='.';
					ctr++;
					continue;
				}

			}
		}
	}
	cout<<ctr;
    return 0;
}