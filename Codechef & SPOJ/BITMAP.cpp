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
		int td[2]={-1,1};
		string s;
		queue<pi> q;
		map<pi,int> mem;
		FOR(i,0,n-1){
			cin>>s;
			FOR(j,0,m-1){
				if(s[j]=='1'){
					q.push(mp(i,j));
					mem[mp(i,j)]=0;
					arr[i][j]=0;
				}
			}
		}
		pi p;
		while(mem.size()!=(n*m)){
			p=q.front();
			q.pop();
			FOR(i,0,1){
				int a=p.first+td[i];
				int b=p.second;
				if(a>=0 && a<n && b>=0 && b<m &&  mem.find(mp(a,b))==mem.end()){
					q.push(mp(a,b));
					mem[mp(a,b)]=mem[p]+1;
					arr[a][b]=mem[p]+1;
				}
				a=p.first;
				b=p.second+td[i];
				if(a>=0 && a<n && b>=0 && b<m && mem.find(mp(a,b))==mem.end()){
					q.push(mp(a,b));
					mem[mp(a,b)]=mem[p]+1;
					arr[a][b]=mem[p]+1;
				}
			}
		}
		FOR(i,0,n-1){
			FOR(j,0,m-1){
				cout<<arr[i][j]<<' ';
			}
			cout<<endl;
		}
	}
}