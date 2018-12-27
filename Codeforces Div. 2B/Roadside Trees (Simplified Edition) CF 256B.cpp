#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(long i=(a);i<(b);i++)
using namespace std;

int main(){
	int n;
	cin>>n;
	int h[n];
	for(auto &x:h)
		cin>>x;
	int sh=0,i=0,p;
	long ctr=0;
	while(i<n){
		if(sh==0){
			sh+=h[i];
			ctr+=h[i]+1;
		}
		else if(sh<=h[i]){
			ctr+=1;
			p=h[i]-sh;
			sh=h[i];
			ctr+=(p+1);
		}
		else if(sh>h[i]){
			p=sh-h[i];
			ctr+=p;
			sh-=p;
			i--;
		}
		i++;
	}
	cout<<ctr;
	return 0;
}
