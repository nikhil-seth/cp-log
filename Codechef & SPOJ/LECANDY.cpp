#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
	long sum=0,c,a;
		scanf("%d%ld",&n,&c);
		while(n--){
			scanf("%ld",&a);
			sum+=a;
		}
		if(sum>c)
			cout<<"No\n";
		else
			cout<<"Yes\n";
	}
	return 0;
}