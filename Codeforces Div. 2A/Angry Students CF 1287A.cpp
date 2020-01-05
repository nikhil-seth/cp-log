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
int main(){
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		string s;
		cin>>s;
		bool f=0;
		int ch=0,ctr=0;
		for(int i=0;i<n;i++){
			if(s[i]=='A'){
				ch=max(ch,ctr);
				ctr=0;
				f=1;
			}
			else if(f==1 && s[i]=='P')
				ctr++;
		}
		ch=max(ch,ctr);
	cout<<ch<<endl;
	}
}