// Max value of loot
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main(){
	int n;
	vector<pair<double,int>> vec;
	long W,vi,wi;
	long double tot=0;
	cin>>n>>W;
	for(int i=0;i<n;i++){
		cin>>vi>>wi;
		vec.push_back(make_pair(double(vi)/wi,wi));
	}
	sort(vec.begin(),vec.end());
	reverse(vec.begin(),vec.end());
	int i=0;
	while(W>0 && i!=n){
		if(W>vec[i].second){
			W-=vec[i].second;
			tot+=vec[i].first*vec[i].second;
		}
		else{
			tot+=vec[i].first*W;
			W=0;
		}
		i++;
	}
	cout<<setprecision(4)<<fixed;
	cout<<tot;
	return 0;
	
}