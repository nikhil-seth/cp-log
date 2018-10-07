// Link to problem : http://codeforces.com/problemset/problem/276/A
#include<iostream>
#include<climits>
using namespace std;
int main(){
	long long f,t,n,k,happy=LLONG_MIN,temp;
	cin>>n>>k;
	while(n--){
		cin>>f>>t;
		if(t>k){
			temp=f-t+k;
		}
		else{
			temp=f;
		}
		if(temp>happy)
			happy=temp;
	}
	cout<<happy;
	return 0;
}