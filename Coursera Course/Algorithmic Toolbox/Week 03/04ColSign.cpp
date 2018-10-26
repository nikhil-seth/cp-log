// Collecting Signatures
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main(){
	int n,ctr=0;
	long a,b,t;
	vector<pair<long ,long>> vec;
	vector<long> pt;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		vec.push_back(make_pair(b,a));
	}
	sort(vec.begin(),vec.end());
	t=vec[0].first;
	pt.push_back(t);
	for(int i=0;i<n;i++){
		if(t<vec[i].second || t>vec[i].first){
			t=vec[i].first;
			pt.push_back(t);
		}
	}
	cout<<pt.size()<<endl;
	for(auto &x:pt)
		cout<<x<<' ';
	return 0;
	
}