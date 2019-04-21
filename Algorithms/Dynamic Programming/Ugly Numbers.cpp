// Program to find nth Ugly No
// Bottom Up Approach
// Link : https://practice.geeksforgeeks.org/problems/ugly-numbers/0

#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
using namespace std;
int main(){
	int t,n;
	cin>>t;
	int i2=0,i3=0,i5=0;
	long n2,n5,n3,mi;
	vector<long> v;
	v.pb(1);
	while(t--){
		cin>>n;
		while(v.size()<n){
			n2=2*v[i2];
			n3=3*v[i3];
			n5=5*v[i5];
			mi=min(n2,min(n3,n5));
			v.pb(mi);
			if(mi==n2)
				i2++;
			if(mi==n3)
				i3++;
			if(mi==n5)
				i5++;
		}
		cout<<v[n-1]<<endl;
	}
}