#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
using namespace std;
void Sieve(int prime[],LL n,set<LL> &s) 
{ 	LL x;
	for(LL i=0;i<=n;i++)
		prime[i]=1;
    for (LL p=2; p*p<=n; p++) 
    { 
       	if (prime[p] == 1) 
        { 
            for (LL i=p*p; i<=n; i += p) 
                prime[i] = 0; 
        } 
    } 
  for (LL p=2; p<=n; p++) {
       if (prime[p]==1) {
       		x=p*p;
       		s.insert(x);
		}
	}
} 
int main(){
	int t;
	cin>>t;
	int *arr;
	arr=new int[1000001];
	set<LL> s;
	set<LL>::iterator it;
	Sieve(arr,1000000,s);
	LL n;
	while(t--){
		cin>>n;
		it=s.find(n);
		if(it==s.end())
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}
	delete[] arr;
	return 0;
}
