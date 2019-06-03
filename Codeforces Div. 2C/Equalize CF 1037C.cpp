#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
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
	int n,res=0;
	string s1,s2;
	cin>>n;
	cin>>s1>>s2;
	FOR(i,0,n-1){
		if(s1[i]!=s2[i]){
			if(i+1!=n && s1[i+1]!=s2[i+1] && s1[i]!=s1[i+1])
				i++;
			++res;
		}
	}
	cout<<res;
}	