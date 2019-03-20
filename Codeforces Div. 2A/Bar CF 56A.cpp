#include <bits/stdc++.h>
using namespace std;
int main(){
	string se[]={"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
	int n,ctr=0;
	cin>>n;
	string s;
	for(int i=0;i<n;i++){
		cin>>s;
		if(s[0]>=48 && s[0]<=57){
			if(s.length()==1)
				ctr++;
			else if(s.length()==2 && s[1]<=55 && s[0]==49)
				ctr++;
			}
		else{
			for(int i=0;i<11;i++)
				if(s.compare(se[i])==0)
					ctr++;
		}
	}
	cout<<ctr;
	return 0;
}