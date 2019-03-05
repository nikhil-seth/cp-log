#include<bits/stdc++.h>
using namespace std;
// Shell Sort
// H-step Insertion Sort, has better time complexity than Insertion Sort.
template <class T>
void shell_sort(T arr[],auto n){
	// Code for Shell Sort
	for(auto h=(n/2);h>0;h/=2){
		for(int i=h;i<n;i++){
			T temp=arr[i];
			auto j=i;
			for(;j>=h && arr[j-h]>temp;j-=h)
				arr[j]=arr[j-h];
			arr[j]=temp;
		}
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(auto &x:arr)
		cin>>x;
	shell_sort(arr,n);
	cout<<"Sorted Array :";
	for(auto &x:arr)
		cout<<x<<endl;
	return 0;
}