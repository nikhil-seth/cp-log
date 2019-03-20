#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	pair<int,int> a[n-1];
	for(auto &x:arr)
		cin>>x;
	for(int i=1;i<n;i++)
		a[i-1]=make_pair(min(arr[i-1],arr[i]),max(arr[i-1],arr[i]));
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n-1;j++){
			//cout<<a[i].first<<' '<<a[i].second<<endl;
			//cout<<a[j].first<<' '<<a[j].second<<endl<<endl;
			
			int x1=a[i].first;
			int x2=a[i].second;
			int x3=a[j].first;
			int x4=a[j].second;
			if(((x1<x3) && (x3<x2) && (x2<x4))|| ((x3<x1) && (x1<x4) && (x4<x2))){
				cout<<"yes";
				return 0;
			}
		}
	}
	cout<<"no";
	return 0;
}