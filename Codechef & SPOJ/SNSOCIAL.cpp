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
void fn(int x,int y,int n,int m,set<pi> &s,queue<pi> &q){
	int arr[3]={-1,0,1};
	FOR(i,0,2){
		FOR(j,0,2){
			int a=x+arr[i];
			int b=y+arr[j];
			if(a>=0 && a<n && b>=0 && b<m){
				if(s.find(mp(a,b))==s.end()){
					q.push(mp(a,b));
					s.insert(mp(a,b));
				}
			}
		}
	}
}
int main(){
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int t,n,m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		int arr[n][m];
		int max_elem=INT_MIN;
		FOR(i,0,n-1){
			FOR(j,0,m-1){
				cin>>arr[i][j];
				max_elem=max(max_elem,arr[i][j]);
			}
		}
		queue<pi> q;
		set<pi> s;
		FOR(i,0,n-1){
			FOR(j,0,m-1){
				if(arr[i][j]==max_elem){
					q.push(mp(i,j));
					s.insert(mp(i,j));
				}
			}
		}
		int ctr=0;
		while(s.size()<(n*m)){
			ctr++;
			int si=q.size();
			while(si--){
				pi p=q.front();
				q.pop();
				fn(p.first,p.second,n,m,s,q);
			}
		}
		cout<<ctr<<endl;
	}
}