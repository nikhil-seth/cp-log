// Link to problem :https://www.hackerearth.com/practice/basic-programming/recursion/recursion-and-backtracking/practice-problems/algorithm/simran-and-stairs/
#include<bits/stdc++.h>
using namespace std;

int jump(int arr[],int n){

	if(n<0)
		return 0;
	if(arr[n]!=-1)
		return arr[n];
	arr[n]=jump(arr,n-1)+jump(arr,n-2)+jump(arr,n-3);
			//printf(" n: %d \t arr[n] :%d \n",n,arr[n]);

	return arr[n];
}
int main(){
	int t;
	cin>>t;
	int arr[31];
	for(int i=0;i<31;i++)
		arr[i]=-1;
	arr[0]=1;
	cout<<jump(arr,t);
	return 0;
}

// Time Complexity : O(n)