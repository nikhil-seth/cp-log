#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t1,t2;
	cin>>n;
	int a[2]={0};
	while(n--){
		cin>>t1>>t2;
		if(t1>t2)
			a[0]++;
		else if(t1<t2)
			a[1]++;
	}
	if(a[0]>a[1])
		cout<<"Mishka";
	else if(a[0]==a[1])
		cout<<"Friendship is magic!^^";
	else
		cout<<"Chris";
	return 0;
}