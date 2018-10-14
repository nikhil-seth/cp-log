#include<iostream>
using namespace std;
int main(){
	int n,ctr=0;
	bool a,b,c,d;
	cin>>n;
	pair<int ,int> x[n];
	for(int i=0;i<n;i++)
		cin>>x[i].first>>x[i].second;
	for(int i=0;i<n;i++){
		a=0;
		b=0;
		c=0;
		d=0;
		for(int j=0;j<n;j++){
			if(x[j].first==x[i].first){
				if(x[j].second<x[i].second)
					a=1;
				else if(x[j].second>x[i].second)
					b=1;
			}
			else if(x[j].second==x[i].second){
				if(x[j].first<x[i].first)
					c=1;
				else if(x[j].first>x[i].first)
					d=1;
			}
		}
		if(a && b && c && d)
			ctr++;
	}	
	cout<<ctr;
	return 0;
}