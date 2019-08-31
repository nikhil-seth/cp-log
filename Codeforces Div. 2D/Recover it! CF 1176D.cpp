#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
using namespace std;
map<long,long> s;
long divad(long x){
	for(long i=2;i*i<=x;i++){
		if(x%i==0)
			return (x/i);
	}
}
void sieve(){
	long x=1;
	vector<bool> vis(2750132,1);
	for(long i=2;i<=2750131;i++){
		if(vis[i]==1){
			for(long j=2;j*i<=2750131;j++)
				vis[i*j]=0;
			s[i]=x++;
		}
	}
}
long lb(long arr[],long l,long h,long val){
	while(l<h){
		long mid=(l+h)/2;
		if(arr[mid]==val)
			return mid;
		else if(arr[mid]>val)
			h=mid-1;
		else
			l=mid+1;
	}
	if(l>h)
		return -1;
	if(arr[l]==val)
		return l;
	return -1;
}
int main(){
	fastio
	//fio
	sieve();
	long n;
	cin>>n;
	vector<long> res;
	multiset<long> arr;
	long x;
	FOR(i,0,2*n-1){
		cin>>x;
		arr.insert(x);
	}
	vector<bool> vis(2*n,0);
	while(arr.size()!=0){
		auto it=arr.end();
		it--;
		auto it2=s.find(*it);
		if(it2==s.end() || (*it)==2){
			res.pb(*it);
			arr.erase(arr.find(divad(*it)));
		}
		else{
			res.pb(it2->second);
			arr.erase(arr.find(it2->second));
		}
		arr.erase(it);
	}
	FORA(x,res)
		cout<<x<<' ';
}