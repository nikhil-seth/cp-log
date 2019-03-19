#include<bits/stdc++.h>
using namespace std;
// Count Sort
void count_sort(vector<int> &arr){
	int max_elem=*max_element(arr.begin(),arr.end());
	int min_elem=*min_element(arr.begin(),arr.end());
	int range=max_elem-min_elem+1;
	vector<int> count(range),output(arr.size());
	for(int i=0;i<arr.size();i++)
		count[arr[i]-min_elem]++;
	for(int i=1;i<count.size();i++)
		count[i]+=count[i-1];
	for(int i=arr.size()-1;i>=0;i--){
		output[count[arr[i]-min_elem]-1]=arr[i];
		count[arr[i]-min_elem]--;
	}
	for(int i=0;i<arr.size();i++)
		arr[i]=output[i];
}

int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];
	count_sort(arr);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<' ';
	return 0;
}