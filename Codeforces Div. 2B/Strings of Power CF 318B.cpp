#include<bits/stdc++.h>
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define ll long long
#define mod1 1000000007
#define MAXN 1000001 
using namespace std;
#include<bits/stdc++.h>
using namespace std;
bool ch(string &a,string &b,int i){
	if(a.size()-i<5)
		return 0;
	for(int j=0;j<5;j++){
		if(a[i+j]!=b[j])
			return 0;
	}
	return 1;
}
int main(){
	fastio
	//fio
	string s;
	cin>>s;
	vector<int> v1,v2;
	string h="heavy",m="metal";
	for(int i=0;i<s.length();i++){
		if(ch(s,h,i))
			v1.pb(i);
	}
	for(int j=s.size()-1;j>=0;j--){
		if(ch(s,m,j))
			v2.pb(j);
	}
	int i,j;
	j=0;
	ll ans=0;
	int prev=0;
	for(i=v1.size()-1;i>=0;i--){
		while(j<v2.size()){
			if(v2[j]>v1[i]){
				prev++;
				j++;
			}
			else
				break;
		}
		ans+=prev;
	}
	cout<<ans;
}
