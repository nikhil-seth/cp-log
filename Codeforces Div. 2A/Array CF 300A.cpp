// Link to problem  : https://codeforces.com/problemset/problem/300/A
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t,a=-1,b=-1;
	vector<int> v[3];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		if(!t)
			v[2].push_back(t);
		else if(t>0)
			v[1].push_back(t);
		else
			v[0].push_back(t);
	}
	if(v[1].size()==0){
		v[1].push_back(v[0][v[0].size()-1]);
		v[0].pop_back();
		v[1].push_back(v[0][v[0].size()-1]);
		v[0].pop_back();
		}
	if(v[0].size()%2==0){
		v[2].push_back(v[0][v[0].size()-1]);
		v[0].pop_back();
	}
	for(int i=0;i<3;i++){
		cout<<v[i].size()<<' ';
		for(int j=0;j<v[i].size();j++){
			cout<<v[i][j]<<' ';
		}
		cout<<endl;
	}
return 0;
}