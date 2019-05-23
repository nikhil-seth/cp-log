#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
using namespace std;
int main(){
	fastio
	//fio
	int n,d;
	cin>>n>>d;
	map<int,int> m;
	string s;
	cin>>s;
	m[n]=0;
	for(int i=n-2;i>=0;i--){
		if(s[i]=='1'){
			int val=INT_MAX;
			map<int,int>::iterator it=m.begin();
			while(it->first-i-1<=d && it!=m.end()){
				val=min(val,it->second);
				it++;
			}
			if(val==INT_MAX){
				cout<<-1;
				return 0;
			}
			m[i+1]=val+1;
		}
	}
	cout<<m[1];
}