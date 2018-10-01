// Link to problem : http://codeforces.com/problemset/problem/441/A
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,k,flag,ctr=-1;
	long t,v;
	cin>>n>>v;
	vector<int> s;
	for(int i=1;i<=n;i++){
		cin>>k;
		flag=0;
		while(k--){
			cin>>t;
			if(t<v && !flag){
				flag=1;
				s.push_back(i);
			}
		}
	}
	cout<<s.size()<<endl;
	for(int i=0;i<s.size();i++){
		cout<<s[i]<<' ';
	}
	return 0;
}