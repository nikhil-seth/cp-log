#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	long x,l=-2000000000,h=2000000000;
	cin>>n;
	string s;
	char c;
	for(int i=0;i<n;i++){
		cin.ignore();
		getline(cin,s,' ');
		cin>>x>>c;
		if((s==">=" && c=='Y') || (s=="<" && c=='N'))
			l=max(l,x);
		else if((s=="<=" && c=='Y') || (s==">" && c=='N'))
			h=min(h,x);
		else if((s==">" && c=='Y') || (s=="<=" && c=='N'))
			l=max(l,x+1);
		else {
			h=min(h,x-1);
	
		}
		//cout<<s<<endl<<s.length()<<endl<<x<<endl<<c<<endl<<" l : "<<l<<"\t h : "<<h<<endl;
	}
	if(l<=h)
		cout<<l;
	else
		cout<<"Impossible";
}




