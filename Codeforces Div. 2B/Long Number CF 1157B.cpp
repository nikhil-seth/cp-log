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

int main(){
	fastio
	//fio
	int n;
	cin>>n;
	string s;
	cin>>s;
	vector<int> v(9);
	FORA(x,v)	cin>>x;
	bool flag=0;
	for(int i=0;i<n;i++){
		//cout<<s[i]<<' '<<v[s[i]-49]<<endl;
		if(s[i]-48<v[s[i]-49]){
			s[i]=v[s[i]-49]+48;
			flag=1;
		}
		else if(s[i]-48==v[s[i]-49])
			continue;
		else if(flag==1)
			break;
	}
	cout<<s;
}