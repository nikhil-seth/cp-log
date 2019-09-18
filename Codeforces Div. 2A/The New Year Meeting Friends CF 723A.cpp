#include<bits/stdc++.h>
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define ll long long
#define mod1 1000000007
using namespace std;
int fn(int a[],int mid){
	int val=0;
	val=val+abs(mid-a[0])+abs(mid-a[1])+abs(mid-a[2]);
	return val;
}
int main(){
	fastio
	//fio
	int a[3];
	FORA(x,a)
		cin>>x;
	sort(a,a+3);
	int l=a[0];
	int r=a[2];
	while(1){
		if(l<r){
			int mid=(l+r)/2;
			int x,y,z;
			x=fn(a,mid);
			y=fn(a,mid-1);
			z=fn(a,mid+1);

			if(x<y && x<z){
				l=mid;
				break;
			}
			else if(x<y){
				l=mid+1;
			}
			else
				r=mid-1;
		}
		else
			break;
	}
	cout<<fn(a,l)<<endl;
}
