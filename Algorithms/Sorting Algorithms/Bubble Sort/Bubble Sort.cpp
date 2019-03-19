#include<bits/stdc++.h>
using namespace std;
// Bubble Sort
template <class T>
void swap(T *a,T *b){
	T temp;
	temp=a;
	a=b;
	b=temp;
}
template <class T>
void bubble_sort(T arr[],int n){
	// Code for bubble sort.
	// Heaviest element comes at bottom.
	// Called bubble sort as bubbles (small elements) come on top.
	// Stable
	int pass,swapped=1;
	for(pass=n-1;pass>=0 && swapped ;pass--){
		swapped=0;
		for(int i=0;i<pass;i++){
			if(arr[i]>arr[i+1]){
				swap(arr[i],arr[i+1]);
				swapped = 1 ;
			}
		}
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(auto &x:arr)
		cin>>x;
	bubble_sort(arr,n);
	cout<<"Sorted Array\n";
	for(auto &x:arr)
		cout<<x<<endl;
	return 0;

}