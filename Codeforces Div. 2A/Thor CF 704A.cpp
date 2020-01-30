#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
#define mp(a,b) make_pair(a,b)
#define pi pair<int,int>
#define mms(a) memset(a,0,sizeof(a))
using namespace std;
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int n,q,ch;
	cin>>n>>q;
	set<int> e[n];
	set<pi> s;
	int un=0,x,i=1;
	while(q--){
		cin>>ch;
		if(ch==1){
			un++;
			cin>>x;
			x-=1;
			s.insert(mp(i,x));
			e[x].insert(i);
			i++;
		}
		else if(ch==2){
			cin>>x;
			x-=1;
			FORA(qt,e[x])
				s.erase(mp(qt,x));
			un-=e[x].size();
			e[x].clear();
		}
		else{
			cin>>x;
			for(auto it=s.begin();it!=s.end() && (*it).first<=x;){
				auto it2=it;
				it++;
				e[it2->second].erase(it2->first);
				s.erase(it2);
				un--;
			}
		}
		cout<<un<<endl;
	}
}