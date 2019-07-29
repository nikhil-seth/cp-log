#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
#define M 100
using namespace std;
// CLOPPAIR
// https://www.spoj.com/problems/CLOPPAIR/
struct pt{
	ll x,y;
	ll id;
};
bool cmpx(const pt &a,const pt &b){
	return a.x<b.x;
}
bool cmpy(const pt &a,const pt &b){
	return a.y<b.y;
}
double euc(const pt &a,const pt &b){
	double d;
	d=pow(a.x-b.x,2);
	d=d+pow(a.y-b.y,2);
	d=sqrt(d);
	return d;
}
double dc(pt arr[],ll s,ll e,ll &xi,ll &xj){
	ll mid=(s+e)/2;
	if(s>=e)
		return INT_MAX;
	long double d1,d2,d;
	ll x1,x2,y1,y2;
	d1=dc(arr,s,mid,x1,y1);
	d2=dc(arr,mid+1,e,x2,y2);
	if(d1<d2){
		d=d1;
		xi=x1;
		xj=y1;
	}
	else{
		d=d2;
		xi=x2;
		xj=y2;
	}
	vector<pt> v;
	for(ll i=mid;i>=s;i--){
		if(arr[mid].x-arr[i].x<=d)
			v.pb(arr[i]);
	}
	for(ll i=mid+1;i<=e;i++){
		if(arr[i].x-arr[mid].x<=d)
			v.pb(arr[i]);
	}
	sort(v.begin(),v.end(),cmpy);
	for(ll i=0;i<v.size();i++){
		for(ll j=i+1;j<v.size() && v[j].y-v[i].y<d;j++){
			if(euc(v[i],v[j])<d){
				xi=v[i].id;
				xj=v[j].id;
				d=euc(v[i],v[j]);
			}
		}
	}
	return d;
}
int main(){
	fastio
	//fio
	ll n;
	cin>>n;
	pt arr[n];
	for(ll i=0;i<n;i++){
		cin>>arr[i].x>>arr[i].y;
		arr[i].id=i;
	}
	sort(arr,arr+n,cmpx);
	ll xi,xj;
	xi=xj=-1;
	double ans=dc(arr,0,n-1,xi,xj);
	cout<<std::fixed<<setprecision(6)<<min(xi,xj);
	cout<<' '<<max(xi,xj)<<' '<<ans<<endl;

}
