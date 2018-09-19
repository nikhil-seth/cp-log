// Link to problem :http://codeforces.com/problemset/problem/490/A
#include<iostream>
#include<vector>
#include<array>
using namespace std;

int main(){
	int n,temp;
	cin>>n;
	vector<int> x[3];
	for(int i=1;i<=n;i++){
		cin>>temp;
		x[temp-1].push_back(i);
	}
	temp=min(x[0].size(),min(x[1].size(),x[2].size()));
	cout<<temp<<endl;
	for(int i=0;i<temp;i++){
		cout<<x[0][i]<<' '<<x[1][i]<<' '<<x[2][i]<<endl;
	}
	return 0;
}

