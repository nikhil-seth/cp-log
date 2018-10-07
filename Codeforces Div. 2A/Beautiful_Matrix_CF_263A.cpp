// Link to problem :http://codeforces.com/problemset/problem/263/A
#include<iostream>

using namespace std;
int main(){
	int n,a,b;
	int arr[5][5];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>arr[i][j];
			if(arr[i][j]){
				a=i-2;
				b=j-2;
			}
		}	
	}
	if(a<0)
		a*=-1;
	if(b<0)
		b*=-1;
	cout<<a+b;

	return 0;

}
