// Max advertisement revenue
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main(){
	long n;
	long long a;
	vector<long> vec1,vec2;
	cin>>n;
	for(long i=0;i<n;i++){
		cin>>a;
		vec1.push_back(a);
	}
	for(long i=0;i<n;i++){
		cin>>a;
		vec2.push_back(a);
	}

	sort(vec1.begin(),vec1.end());
	sort(vec2.begin(),vec2.end());
	a=0;
	for(long i=0;i<n;i++){
		a+=vec1[i]*vec2[i];
	}
	cout<<a;
	return 0;
	
}