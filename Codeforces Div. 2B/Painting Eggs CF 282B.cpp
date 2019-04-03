#include <bits/stdc++.h>
#define LL unsigned long long
using namespace std;
int main(){
	int n,x,y;
	cin>>n;
	string s;
	long sa=0,sb=0;
	for(int i=0;i<n;i++){
		cin>>x>>y;
		if((sa+x-sb>500)){
			sb+=y;
			s.append("G");
		}
		else{
			sa+=x;
			s.append("A");
		}
	} 	
	if(abs(sa-sb)>500)
		cout<<-1;
	else
		cout<<s;
	return 0;
}	