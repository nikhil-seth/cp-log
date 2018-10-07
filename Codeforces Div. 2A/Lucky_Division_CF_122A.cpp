// Link to problem :http://codeforces.com/problemset/problem/122/A
#include<iostream>

using namespace std;
int main(){
	int n,i=0,flag=0;
	int arr[9]={4,7,47,74,447,477,474,774,747};
	cin>>n;
	while(i!=9){
		if(n%arr[i]==0){
			flag=1;
			break;
		}
		i++;
	}
	if(flag)
		cout<<"YES";
	else 
		cout<<"NO";
	

	return 0;

}
