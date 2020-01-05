#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
#define pi pair<int,int>
#define mp(a,b) make_pair(a,b)
using namespace std;
string fn(string &a,string &b,int k){
	string x;
	FOR(i,0,k-1){
		if(a[i]==b[i])
			x.pb(a[i]);
		else if((a[i]=='S' && b[i]=='E') || (a[i]=='E' && b[i]=='S'))
			x.pb('T');
		else if((a[i]=='S' && b[i]=='T') || (a[i]=='T' && b[i]=='S'))
			x.pb('E');
	else if((a[i]=='E' && b[i]=='T') || (a[i]=='T' && b[i]=='E'))
			x.pb('S');
	}
	return x;
}
int main(){
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int n;
	cin>>n;
	int arr[n];
	vector<bool> v(n+1,0);
	FORA(x,arr){
		cin>>x;
		v[x]=1;
	}
	if(n==1){
		cout<<0;
		return 0;
	}
	int eve,odd;
	eve=odd=0;
	FOR(i,1,n){
		if(v[i]==0){
			if(i%2==0)
				eve++;
			else
				odd++;	
		}
	}
	if(eve+odd==n){
		cout<<1;
		return 0;
	}
	vector<int> ee,oe,oo,o1,e1;
	int pe=-1,idx=-1;
	FOR(i,0,n){	
		if(i==n){
			if(idx==n-1)
				continue;
			if(pe==0)
				e1.pb(n-idx-1);
			else
				o1.pb(n-idx-1);
		}
		else if(i!=n && arr[i]!=0){
			if(pe==-1){
				if(i==0){
					pe=arr[i]%2;
					idx=i;
					continue;
				}
				if(arr[i]%2==0)
					e1.pb(i);
				else
					o1.pb(i);
			}
			else if(pe==0 && arr[i]%2==0  && i-idx-1!=0){	//ee
				ee.pb(i-idx-1);
			}
			else if(pe==1 && arr[i]%2!=0  && i-idx-1!=0)
				oo.pb(i-idx-1);
			else if(i-idx-1!=0)
				oe.pb(i-idx-1);
			pe=arr[i]%2;
			idx=i;
		}
	}
	int eec,ooc,e1c,o1c,oec;
	eec=ooc=e1c=o1c=oec=0;
	ll ans=0;
	sort(ee.begin(),ee.end());
	sort(oo.begin(),oo.end());
	sort(oe.begin(),oe.end());
	sort(o1.begin(),o1.end());
	sort(e1.begin(),e1.end());
	//cout<<odd<<' '<<eve<<' '<<oo.size()<<' '<<ee.size()<<' '<<oe.size()<<' '<<o1.size()<<' '<<e1.size()<<endl;
	while(eec<ee.size() && eve>0){
		if(ee[eec]<=eve)
			eve-=ee[eec++];
		else
			break;
	}
	ans+=(2*(ee.size()-eec));
	while(ooc<oo.size() && odd>0){
		if(oo[ooc]<=odd)
			odd-=oo[ooc++];
		else
			break;

	}
	ans+=(2*(oo.size()-ooc));
	while(e1c<e1.size() && eve>0){
		if(e1[e1c]<=eve)
			eve-=e1[e1c++];
		else
			break;
	}
	while(o1c<o1.size() && odd>0){
		if(o1[o1c]<=odd){
			odd-=o1[o1c++];
		}
		else
			break;

	}
	ans+=(o1.size()-o1c);
	ans+=(e1.size()-e1c);
	ans+=oe.size();
	FOR(i,1,n-1){
		if(arr[i]==0 || arr[i-1]==0)
			continue;
		else if(arr[i]%2==0 && arr[i-1]%2!=0)
			ans++;
		else if(arr[i]%2!=0 && arr[i-1]%2==0)
			ans++;
	}
	cout<<ans;

	
}