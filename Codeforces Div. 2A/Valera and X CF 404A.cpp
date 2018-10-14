// Link to problem :http://codeforces.com/problemset/problem/404/A
#include<iostream>
#include<set>
using namespace std;
int main(){
	int n;
	cin>>n;
	char s;
	set<char>a,b;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>s;
			if(i==j || (i+j)==(n-1))
				a.insert(s);
			else
				b.insert(s);
		}
	}
	if(a.size()==1 && b.size()==1 &&((*a.begin())!=(*b.begin())))
		cout<<"YES";
	else 
		cout<<"NO";

	return 0;
	
}