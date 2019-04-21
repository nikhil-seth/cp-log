#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main(){
	int n;
	cin>>n;
	pair<int,int> arr[n];
	int i=1;
	FORA(x,arr){
		cin>>x.first;
		x.second=i++;
	}
	sort(arr,arr+n);
	int d,ctr;
	vector<pair<int,int>> p;
	for(int i=0;i<n;i++){
		d=0;
		if(arr[i].first==arr[i+1].first){
			d=arr[i+1].second-arr[i].second;
			ctr=0;
			while(arr[i].first==arr[i+1].first && arr[i+1].second-arr[i].second==d)
				i++;
			if(arr[i].first!=arr[i+1].first)
				p.push_back(make_pair(arr[i].first,d));
			else
				while(arr[i].first==arr[i+1].first)
					i++;
		}
		else
			p.push_back(make_pair(arr[i].first,d));
	}
	cout<<p.size()<<endl;
	for(int i=0;i<p.size();i++)
		cout<<p[i].first<<' '<<p[i].second<<endl;
	return 0;
}