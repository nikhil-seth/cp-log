// Link to problem :http://codeforces.com/problemset/problem/469/A
#include<iostream>
#include<set>

using namespace std;
int main(){
	int n,i=0;
	cin>>n;
	set<int>g;
	while(i<2){
		int m,t;
		cin>>m;
		while(m--){
			cin>>t;
			g.insert(t);

		}
		++i;
	}int flag=0;
	while(n>0){
		if(g.find(n)==g.end()){
			flag=1;
			break;
		}
		n--;
	}
	if(flag)
		cout<<"Oh, my keyboard!";
	else
		cout<<"I become the guy.";
	return 0;
}
