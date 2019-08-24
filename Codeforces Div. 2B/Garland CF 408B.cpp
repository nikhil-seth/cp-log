#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
using namespace std;
int main(){
	fastio
	//fio
	int a[26],b[26];
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	string s;
	cin>>s;
	int ans=0;
	for(int i=0;i<s.length();i++)
		a[s[i]-97]++;
	cin>>s;
	bool flag=0;
	for(int i=0;i<s.length();i++)
		b[s[i]-97]++;
	for(int i=0;i<26;i++){
		if(b[i]!=0 && a[i]==0){
			flag=1;
			break;
		}
		else if(b[i]<a[i])
			ans+=b[i];
		else
			ans+=a[i];
	}
	if(flag)
		cout<<-1;
	else
		cout<<ans;
}