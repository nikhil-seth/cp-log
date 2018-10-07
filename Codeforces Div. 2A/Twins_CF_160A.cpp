// Link to problem :http://codeforces.com/problemset/problem/160/A
#include<iostream>
#include<vector>
#include <algorithm> 


using namespace std;
int main(){
	int n,x;
	long sum=0,sum2=0;
	cin>>n;
	vector<int> arr;
	for(int i=0;i<n;i++){
		cin>>x;
		arr.push_back(x);
		sum+=arr[i];
	}
	sort(arr.begin(),arr.end());
	int i=0;
	while(i<n && sum2<=sum){
		sum2+=arr[n-i-1];
		sum-=arr[n-i-1];
		i++;
	}
	cout<<i;
	return 0;
}
